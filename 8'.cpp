// Programa: 8
// Autor: Gabriel Bertussi
// Data de Cria��o: 04/08/21
// Data de Modifica��o: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float tempF, tempC;
	printf("Insira a temperatura em graus FARENHEIT: ");
	scanf("%f", &tempF);
	
	tempC = (5*(tempF-32)/9);
	
	printf("A temperatura em graus CELSIUS e: %.f\n", tempC);
	system("pause");
}
