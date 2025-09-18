Algoritmo exercise_5
	Definir A, B, C, big, mid, low, res, coc, mcd, mcm Como Reales
	mcd <- 0
	mcm <- 0
	res <- 1
	Escribir "Para el correcto funcionamiento del programa, ingrese solamente ENTEROS"
	Escribir "Escribe tu número A:"
	Leer A
	Escribir "Escribe tu número B:"
	Leer B
	Escribir "Escribe tu número C:"
	Leer C
	
	Si A >= B y A >= C Entonces
		big <- A
		Si B >= C Entonces
			mid <- B
			low <- C
		SiNo
			mid <- C
			low <- B
		FinSi
	FinSi
	Si B >= A y B >= C Entonces
		big <- B
		Si A >= C Entonces
			mid <- A
			low <- C
		SiNo
			mid <- C
			low <- A
		FinSi
	FinSi
	Si C > A y C > B Entonces
		big <- C
		Si A >= B Entonces
			mid <- A
			low <- B
		SiNo
			mid <- B
			low <- A
		FinSi
	FinSi
	
	Escribir big, " ", mid, " ", low
	
	Mientras no(res = 0) Hacer
		Escribir big, " ", mid, " ", low, " ", res
		coc = mid/low
		Si coc = trunc(coc) Entonces
			res = 0
		SiNo
			res = mid MOD low
			mid <- low
			low <-  res
		FinSi
	FinMientras
	Mientras mcd = 0 Hacer
		Escribir big, " ", mid, " ", low, " ", res
		mid <- big
		coc = mid/low
		Si coc = trunc(coc) Entonces
			res = 0
			mcd <- low
		SiNo
			res = mid MOD low
			mid <- low
			low <-  res
		FinSi
	FinMientras
	mcm <- (A*B*C)/mcd
	Escribir "El MCD entre ", A, " ", B, " ", C, " es: ", mcd
	Escribir "El MCM entre ", A, " ", B, " ", C, " es: ", mcm

FinAlgoritmo
