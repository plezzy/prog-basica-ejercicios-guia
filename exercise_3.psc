Algoritmo exercise_3
	// ANÁLISIS DEL PROBLEMA
	// DEFINIR EL PROBLEMA:
	// El ejercicio pide entender conceptos previos como qué es la secuencia Fibonacci y lograr entender el patrón de la misma
	// para crear un algoritmo que cumpla con las condiciones del problema.
	// DECLARACIÓN DE VARIABLES:
	// ENTRADA: n como Entero (será el input que recibiremos para calcular el n-ésimo término de la secuencia fibonacci)
	// PROCESO: current, current_next, current_support como Enteros (1: guardará el valor actual en la secuencia según n;
	// 																	2: guardará current antes de ser modificada;
	//																	3: guardará el valor anterior en la secuencia según n.
	// SALIDA: current como Entero (será el valor numérico del n-ésimo término de la secuencia),
	//								sequence como Caracter (será el mensaje que guarde toda la secuencia Fibonacci hasta n)
	Definir n, a, b, c, i Como Entero
	Definir sequence Como Caracter
	Escribir "Para el correcto funcionamiento ingresar solamente valores numéricos ENTEROS"
	Escribir "Escribe el término n de la secuencia Fibonacci que quieras conocer: "
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
