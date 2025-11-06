#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void showMatrix(float** MATRIX, int N)
{
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			//if(MATRIX[i][j] >= 10 || MATRIX[i][j] < 0)
			//{	
			//	cout << " " << MATRIX[i][j] << "  ";
			//}
			//else
			//{
			//	cout << "  " << MATRIX[i][j] << "  ";
			//} 
			cout << setw(8) << MATRIX[i][j];
		}
		cout << endl;
	}
}

void sumSubMatrix(float** MATRIX_A, float** MATRIX_B, float** MATRIX_C, int N, int op)
{
	if(op == 1)
	{
		//op = 1; suma
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				MATRIX_C[i][j] = MATRIX_A[i][j] + MATRIX_B[i][j];
			}
		}
	}
	else
	{
		//op = 0; resta
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				MATRIX_C[i][j] = MATRIX_A[i][j] - MATRIX_B[i][j];
			}
		}
	}
	showMatrix(MATRIX_C, N);
}
void multiplyMatrices(float** MATRIX_A, float** MATRIX_B, float** MATRIX_C, int N)
{
	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			for(int x = 0; x < N; x++)
			{
				sum = sum + (MATRIX_A[i][x] * MATRIX_B[x][j]);
			}
			MATRIX_C[i][j] = sum;
			sum = 0;
		}
	}
	showMatrix(MATRIX_C, N);
}

float determinant(float** MATRIX, int N)
{
	float det = 0;
	if(N == 1)
	{
		//cout << "ENTRO A DET N==1." << endl;
		det = MATRIX[0][0];
	}
	else if(N==2)
	{
		//cout << "ENTRO A DET N==2." << endl;
		det = MATRIX[0][0]*MATRIX[1][1] - MATRIX[0][1]*MATRIX[1][0];
	}
	else
	{
		//cout << "ENTRO A DET N>2." << endl;
		float** MATRIX_AUX = new float*[N-1];
        for(int i = 0; i < N-1; i++) 
		{
            MATRIX_AUX[i] = new float[N-1];
        }
		
		for(int j = 0; j < N; j++)
		{
			for(int x = 1; x < N; x++)
			{
				int y_aux = 0;
				for(int y = 0; y < N; y++)
				{
					if(y != j)
					{
						MATRIX_AUX[x-1][y_aux] = MATRIX[x][y];
						y_aux++;
					}
				}
			}
			det += pow(-1, j) * MATRIX[0][j] * determinant(MATRIX_AUX, N-1);
		}
	}
	return det;
}

int inverseMatrices(float** MATRIX, float** MATRIX_C, int N)
{
	float det = determinant(MATRIX, N);
	if(det == 0)
	{
		cout << "La matriz no tiene inversa, porque su determinante es cero: Determinante = " << det << endl;
		return 1;
	}
	
	float aux;
	float opAdd;
	float divid;
	//CONVERTIR MATRIZ C EN MATRIZ IDENTIDAD
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
			{
				MATRIX_C[i][j] = 1;
			}
			else
			{
				MATRIX_C[i][j] = 0;
			}
		}
	}
	//APLICAR ALGORITMO GAUSS JORDAN
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)	
		{
			if(i == j && MATRIX[i][j] != 0)
			{
				//cout << "CURSO NORMAL" << endl;
				//cout << endl;
				//showMatrix(MATRIX, N);
				//cout << endl;
				//showMatrix(MATRIX_C, N);
				//cout << endl;
				if(MATRIX[i][j] != 1)
				{
					divid = MATRIX[i][j];
					for(int x = 0; x < N; x++)
					{
						//cout << "MATRIX[i][x]: " << MATRIX[i][x] << "/" << divid << " = " << MATRIX[i][x]/divid << endl;
						//cout << "MATRIX_C[i][x]: " << MATRIX_C[i][x] << "/" << divid << " = " << MATRIX_C[i][x]/divid << endl;
						MATRIX[i][x] = MATRIX[i][x]/divid;
						MATRIX_C[i][x] = MATRIX_C[i][x]/divid;
						
					}
				}
				//cout << endl;
				//showMatrix(MATRIX, N);
				//cout << endl;
				//showMatrix(MATRIX_C, N);
				//cout << endl;
				for(int y = 0; y < N; y++)
				{
					if(MATRIX[y][j] != 0 && y!= j)
					{
						opAdd = MATRIX[y][j] * (-1);
						for(int x = 0; x < N; x++)
						{
							MATRIX[y][x] += MATRIX[i][x]*opAdd;
							MATRIX_C[y][x] += MATRIX_C[i][x]*opAdd;
						}
					}
				}
				//cout << endl;
				//showMatrix(MATRIX, N);
				//cout << endl;
				//showMatrix(MATRIX_C, N);
				//cout << endl;
			}
			else if(i == j && MATRIX[i][j] == 0)
			{
				//cout << "ENTRO AL CAMBIO DE FILAS" << endl;
				for(int z = 0; z < N; z++)
				{
					if(z != i && MATRIX[z][j] != 0)
					{
						for(int h = 0; h < N; h++)
						{
							aux = MATRIX[i][h];
							MATRIX[i][h] = MATRIX[z][h];
							MATRIX[z][h] = aux;
							aux = MATRIX_C[i][h];
							MATRIX_C[i][h] = MATRIX_C[z][h];
							MATRIX_C[z][h] = aux;
						}
						break;
					}
				}
			}
		}
	}
	showMatrix(MATRIX_C, N);
	return 0;
}

int main()
{
	int N;
	float a;
	float b;
	cout << "Ingresa el tamano (ENTERO) para definir las matrices cuadradas A y B: " << endl;
	cin >> N;
	float** MA_A = new float*[N];
	float** MA_B = new float*[N];
	float** MA_C = new float*[N];
	for(int i = 0; i < N; i++)
	{
		MA_A[i] = new float[N];
		MA_B[i] = new float[N];
		MA_C[i] = new float[N];
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout << "Elemento en la posicion [" << i << "][" << j << "] de la matriz A y B: " << endl;	
			cin >> MA_A[i][j] >> MA_B[i][j]; 
		}
	}
	
	// MOSTRAR MATRICES
	cout << "\nMATRIZ A: " << endl;
	showMatrix(MA_A, N);
	cout << "\nMATRIZ B: " << endl;
	showMatrix(MA_B, N);
	
	// MOSTRAR MATRIZ A+B
	cout << "\nMATRIZ A+B: " << endl;
	sumSubMatrix(MA_A, MA_B, MA_C, N, 1);
	
	// MOSTRAR MATRIZ A-B
	cout << "\nMATRIZ A-B: " << endl;
	sumSubMatrix(MA_A, MA_B, MA_C, N, 0);
	
	// MOSTRAR MATRIZ A*B
	cout << "\nMATRIZ A*B: " << endl;
	multiplyMatrices(MA_A, MA_B, MA_C, N);
	
	cout << fixed << setprecision(2);
	
	// MOSTRAR MATRIZ A^-1
	cout << "\nMATRIZ inversa A: " << endl;
	inverseMatrices(MA_A, MA_C, N);
	
	// MOSTRAR MATRIZ B^-1
	cout << "\nMATRIZ inversa B: " << endl;
	inverseMatrices(MA_B, MA_C, N);
	
	//a = 0;
	//b = -1;
	//cout << 0*(-1) << endl;
	//cout << a*b << endl;
	
	
	for (int i = 0; i < N; i++) {
		delete[] MA_A[i];
		delete[] MA_B[i];
	}
	delete[] MA_A;
	delete[] MA_B;
	
	return 0;
}
