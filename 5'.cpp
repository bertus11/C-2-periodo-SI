// Programa: 5
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float raio, area;
	
	printf("Insira o valor do RAIO: ");
	scanf("%f", &raio);
	
	area = 3.14*raio*raio;
	printf("A AREA do circulo e : %.2f CM\n", area);
	system("pause");
}
