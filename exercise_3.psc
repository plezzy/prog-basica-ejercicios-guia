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
	Definir n Como Entero
	Definir current Como Entero
	Definir current_support Como Entero
	Definir current_before Como Entero
	Definir sequence Como Caracter
	Escribir "Para el correcto funcionamiento ingresar solamente valores numéricos ENTEROS"
	leer a
	Escribir "Escribe el término n de la secuencia Fibonacci que quieras conocer: "
	Leer n
	current_next <- 1
	current <- 0
	sequence <- ""
	Si n > 0 Entonces
		Escribir "N: " + ConvertirATexto(n)
		Repetir
			current_support <- current_next
			current_next = current_next + current
			current = current_support
			sequence <- sequence + ConvertirATexto(current) + " "
			n <- n-1
		Hasta Que n = 0
		Escribir "Valor Fibonacci para n: " + ConvertirATexto(current)
		Escribir "Serie Fibonacci hasta n: " + sequence
	SiNo
		Escribir "Terminando el programa"
	FinSi
FinAlgoritmo
