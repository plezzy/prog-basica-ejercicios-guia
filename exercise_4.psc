Algoritmo exercise_4
	Definir N, i, k, factorial Como Entero
	Definir seq Como Caracter
	Escribir "(Para el correcto funcionamiento del programa ingresar solamente NUMEROS ENTEROS)"
	Escribir "Bienvenido al programa: Serie de Euler"
	Escribir "Ingresa un numero entero NO NEGATIVO: "
	Leer N
	Si N >= 0 Entonces
		k <- 0
		Mientras k <= n-1 Hacer
			i <- 1
			factorial <- 1
			Mientras i <= k Hacer
				factorial <- factorial * i
				i <- i + 1
			Fin Mientras
			seq <- seq + ConvertirATexto(1/factorial) + " "
			k <- k + 1
		FinMientras
		Escribir "Valor de (e) para N: ", ConvertirATexto(1/factorial), " | Serie de (e) hasta N: ", seq
	SiNo
		Escribir "Terminando el programa. Muchas gracias"
	FinSi
FinAlgoritmo
