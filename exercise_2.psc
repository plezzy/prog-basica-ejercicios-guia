Algoritmo exercise_2
	
	// ANÁLISIS DEL PROBLEMA
	// 	El programa necesita calcular el factorial dado un dato numérico N, posterior a ello se debe imprimir
	// en pantalla: N y su factorial. Eso es todo.
	
	// DECLARACIÓN DE VARIABLES
	// - Entrada: N como Entero (respuesta del usuario)
	// - Proceso: number como Entero (número copia de N para no modificar la variable original), factorial
	// 			como Entero (guardará el resultado del factorial de N), br como Carácter (ambiente visual al programa)
	// - Salida: process_info como Carácter (mostrará de forma visual la multiplicación de todos los números, OPCIONAL), factorial (despues de ser procesado) y N.
	
	Definir N Como Entero
	Escribir "(Para el correcto funcionamiento del programa ingresar solamente NUMEROS ENTEROS, dale Enter para continuar)"
	Leer a
	Escribir "Bienvenido al programa: Calculadora de Factoriales"
	Escribir "Ingresa un numero entero NO NEGATIVO: "
	Leer N
	Si N >= 0 Entonces
		Definir factorial Como Entero
		i <- 1
		factorial <- 1
		Mientras i <= N Hacer
			factorial <- factorial * i
			i <- i + 1
		Fin Mientras
		Escribir "N: ", ConvertirATexto(N), " | Factorial de N: ", factorial
	SiNo
		Escribir "Terminando el programa. Muchas gracias"
	FinSi
FinAlgoritmo
