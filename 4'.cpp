// Programa: 4
// Autor: Gabriel Bertussi
// Data de Cria��o: 04/08/21
// Data de Modifica��o: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float valor;
	
	printf("Insira o valor em METROS: ");
	scanf("%f", &valor);
	printf("O valor em CENTIMENTROS e : %.1f cm", (valor*100));
}
