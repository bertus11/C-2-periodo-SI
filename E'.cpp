// Programa: G
// Autor: Gabriel Bertussi
// Data de Cria��o: 04/08/21
// Data de Modifica��o: 09/08/21

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// variaveis 
float areapint, quantidade, quantinta;

main (){

setlocale (LC_ALL, "portuguese");
	
	printf("Informe o tamanho em metros da �rea a ser pintada: ");
	scanf("%f", &areapint);
	
	quantinta = areapint/6;
	
	printf("A quantidade de tinta em LITROS �: %.f\n", quantinta);
	
	
	
}
