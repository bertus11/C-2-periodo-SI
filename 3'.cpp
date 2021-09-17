// Programa: 3
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float num1,num2,num3,num4,media;
	
	printf("Insira a nota1: ");
	scanf ("%f", &num1);
	printf("Insira a nota2: ", num2);
	scanf("%f", &num2);
	printf("Insira a nota3: ");
	scanf ("%f", &num3);
	printf("Insira a nota4: ");
	scanf("%f", &num4);
	
	media = (num1 + num2+ num3 + num4)/4;
	printf("A media e : %.1f\n", media);
}
