Algoritmo Ejercicio6 	
	Definir n, N1, p Como Entero 	
	N1 <- 0 	
	n <- -1
	Definir i, I1, C, Vf Como Real 	
	I1 <- 0 	
	Escribir 'Ingrese el valor del capital inicial: ' 
	Leer C 
	Escribir 'Ingrese la tasa de interes nominal anual: '	
	Leer I1 
	Mientras n < 0 
		Escribir 'Ingrese el numero de a�os que durar� la inversi�n: ' 
		Leer n 
	FinMientras 	
	Escribir 'Ingrese el sistema o periodo de capitalizaci�n de los intereses (1. Mensual 2. Trimestral, 3. Semestral, 4. Anual): ' 	
	Leer p 	
	Segun p Hacer 
		1: 
			p <-12 
		2: 
			p <- 4 
		3: 
			p <- 2 
		4:   
			p <- 1 
		De Otro Modo:
			p <- 0
	Fin Segun 
	Si p = 0 Entonces
		Escribir "Opci�n inv�lida, finalizando programa."
	SiNo
		N1 <- n * p 
		i <- (I1/p) 
		Si n <> 0 Entonces 
			Vf <- C * (1 + i)^N1 
		SiNo 
			Vf <- C
		FinSi 
		Escribir 'Capital inicial (C): ' C  ' | La tasa de inter�s nominal anual (I): '  I1 ' | Tasa de inter�s efectiva (i): ' i ' | Tiempo de la inversi�n en a�os (n): ' n ' | Periodos capitalizables de la inversi�n (N): ' N1 ' | Periodos capitalizables en un a�o (p): ' p ' | El capital final en la inversi�n ser� (VF): ' Vf
	FinSi
FinAlgoritmo 