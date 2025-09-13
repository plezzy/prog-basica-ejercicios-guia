Algoritmo exercise_3
	// AN�LISIS DEL PROBLEMA
	// DEFINIR EL PROBLEMA:
	// El ejercicio pide entender conceptos previos como qu� es la secuencia Fibonacci y lograr entender el patr�n de la misma
	// para crear un algoritmo que cumpla con las condiciones del problema.
	// DECLARACI�N DE VARIABLES:
	// ENTRADA: n como Entero (ser� el input que recibiremos para calcular el n-�simo t�rmino de la secuencia fibonacci)
	// PROCESO: current, current_next, current_support como Enteros (1: guardar� el valor actual en la secuencia seg�n n;
	// 																	2: guardar� current antes de ser modificada;
	//																	3: guardar� el valor anterior en la secuencia seg�n n.
	// SALIDA: current como Entero (ser� el valor num�rico del n-�simo t�rmino de la secuencia),
	//								sequence como Caracter (ser� el mensaje que guarde toda la secuencia Fibonacci hasta n)
	Definir n, a, b, c, i Como Entero
	Definir sequence Como Caracter
	Escribir "Para el correcto funcionamiento ingresar solamente valores num�ricos ENTEROS"
	Escribir "Escribe el t�rmino n de la secuencia Fibonacci que quieras conocer: "
	Leer n
	a <- 0
	b <- 1
	Si n <= 0 Entonces
		Escribir "Terminando el programa"
	SiNo
		i <- 0
		Mientras i <= n-1 Hacer
			c <- a
			sequence <- sequence + ConvertirATexto(c) + " " 
			a <- b
			b <- b + c
			i <- i + 1
		Fin Mientras
		Escribir "Valor Fibonacci para N: " + ConvertirATexto(c) + " | Secuencia hasta N: " + sequence
	FinSi
FinAlgoritmo
