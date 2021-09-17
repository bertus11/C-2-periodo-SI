// Programa: 4
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float valor;
	
	printf("Insira o valor em METROS: ");
	scanf("%f", &valor);
	printf("O valor em CENTIMENTROS e : %.1f cm", (valor*100));
}
