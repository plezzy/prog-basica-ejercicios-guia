Algoritmo exercirse_1
	Definir N Como Entero
	Escribir 'Para el correcto funcionamiento del programa, ingresa solamente numeros enteros.'
	Escribir '¿Cuántos numeros enteros vas a ingresar?: '
	Leer N
	Si  NO (N<=0) Entonces
		Definir positives Como Entero
		positives <- 0
		Definir negatives Como Entero
		negatives <- 0
		Definir zeros Como Entero
		zeros <- 0
		Definir num_response Como Entero
		Definir response Como Cadena
		Definir i Como Entero
		i <- 0
		Repetir
			i <- i+1
			Escribir 'Numero '+ConvertirATexto(i)+' :'  
			Leer num_response
			Si num_response>0 Entonces
				positives <- positives+1
				Escribir "Es positivo"
			SiNo
				Si num_response<0 Entonces
					negatives <- negatives+1
					Escribir "Es negativo"
				SiNo
					zeros <- zeros+1
					Escribir "Es cero"
				FinSi
			FinSi
		Hasta Que i=N
		Escribir 'Positivos: '+ConvertirATexto(positives), ' | Negativos: '+ConvertirATexto(negatives), ' | Ceros: '+ConvertirATexto(zeros), ' | Numeros analizados: '+ConvertirATexto(N)
	SiNo
		Escribir 'Terminando el programa'
	FinSi
FinAlgoritmo
