Algoritmo exercirse_1
	Definir N Como Entero
	Escribir 'Para el correcto funcionamiento del programa, ingresa solamente numeros enteros.'
	Escribir '¿Cuántos numeros enteros vas a ingresar?: '
	Leer N
	Si  NO (N<=0) Entonces
		Definir positives Como Entero
		Definir negatives Como Entero
		Definir zeros Como Entero
		positives <- 0
		negatives <- 0
		zeros <- 0
		Definir num_response Como Entero
		Definir i Como Entero
		i <- 0
		Repetir
			i <- i+1
			Escribir 'Numero '+ConvertirATexto(i)+' :'  
			Leer num_response
			Si num_response>0 Entonces
				positives <- positives+1
			SiNo
				Si num_response<0 Entonces
					negatives <- negatives+1
				SiNo
					zeros <- zeros+1
				FinSi
			FinSi
		Hasta Que i=N
		Escribir 'Positivos: '+ConvertirATexto(positives), ' | Negativos: '+ConvertirATexto(negatives), ' | Ceros: '+ConvertirATexto(zeros), ' | Numeros analizados: '+ConvertirATexto(N)
	SiNo
		Escribir 'Terminando el programa'
	FinSi
FinAlgoritmo
