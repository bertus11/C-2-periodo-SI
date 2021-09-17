// Programa: 6
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>

 main (){
	// variaveis:
	float lado, area;
	printf("Insira o LADO do quadrado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	printf("O DOBRO da AREA do quadrado e: %.1f cm\n", area*2);
	system("pause");
	
}
