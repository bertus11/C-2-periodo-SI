// Programa: D
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main (){
	// variaveis
	float excesso, multa, total;
	
	printf("Insira o peso em KG: ");
	scanf("%f", &total);
	
	if (total > 50){
		excesso = total - 50;
		printf("O excesso e de: %.f KG\n", excesso);
		multa = excesso*4;
		printf("A multa a ser paga e de: %.2f R$\n", multa);
	}
	else {
		printf("O peso e : %.f KG\n", total);
	}
system("pause");

}
