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
		Escribir 'Ingrese el numero de años que durará la inversión: ' 
		Leer n 
	FinMientras 	
	Escribir 'Ingrese el sistema o periodo de capitalización de los intereses (1. Mensual 2. Trimestral, 3. Semestral, 4. Anual): ' 	
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
		Escribir "Opción inválida, finalizando programa."
	SiNo
		N1 <- n * p 
		i <- (I1/p) 
		Si n <> 0 Entonces 
			Vf <- C * (1 + i)^N1 
		SiNo 
			Vf <- C
		FinSi 
		Escribir 'Capital inicial (C): ' C  ' | La tasa de interés nominal anual (I): '  I1 ' | Tasa de interés efectiva (i): ' i ' | Tiempo de la inversión en años (n): ' n ' | Periodos capitalizables de la inversión (N): ' N1 ' | Periodos capitalizables en un año (p): ' p ' | El capital final en la inversión será (VF): ' Vf
	FinSi
FinAlgoritmo 