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
	Definir n Como Entero
	Definir current Como Entero
	Definir current_support Como Entero
	Definir current_before Como Entero
	Definir sequence Como Caracter
	Escribir "Para el correcto funcionamiento ingresar solamente valores num�ricos ENTEROS"
	leer a
	Escribir "Escribe el t�rmino n de la secuencia Fibonacci que quieras conocer: "
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
