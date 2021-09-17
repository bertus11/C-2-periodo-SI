// Programa: 11
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

main (){
	//variaveis
	float altura,peso,escolha;
	
	printf("Digite 1 se for HOMEM | Digite 2 se for MULHER: ");
	scanf("%f", &escolha);
	
	if (escolha == 1){
		printf("Insira a sua ALTURA: ");
		scanf("%f", &altura);
		
		peso = (72.7*altura)-58;
		
		printf("Seu PESO IDEAL e de: %.1f KG \n", peso);
		
	}
	else
		if (escolha == 2){
		printf("Insira a sua ALTURA: ");
		scanf("%f", &altura);
		
		peso = (62.1*altura)-44.7;
		
		printf("Seu PESO IDEAL e de: %.1f KG \n", peso);	
		}
system ("pause");
}
