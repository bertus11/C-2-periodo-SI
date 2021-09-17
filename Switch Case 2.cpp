// Autor: Gabriel Bertussi
// Data: 30/08/2021

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int opcao;
	float numero, numero2;
	
	printf("----------CALCULADORA----------\n");
	printf("\n");
	printf("----------Digite [1] para SOMAR: \n");
	printf("----------Digite [2] para SUBTRAIR: \n");
	printf("----------Digite [3] para MULTIPLICAR: \n");
	printf("----------Digite [4] para DIVIDIR: \n");
	printf("----------Digite [5] para SAIR: \n");
	printf("\n");
	
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 1:
			printf("Insira um valor: ");
			scanf("%f", &numero);
			printf("Insira um valor: ");
			scanf("%f", &numero2);
			printf("A SOMA dos numeros e: %.f\n", numero+numero2);
			break;
		case 2:
			printf("Insira um valor: ");
			scanf("%f", &numero);
			printf("Insira um valor: ");
			scanf("%f", &numero2);
			printf("A SUBTRACAO dos numeros e: %.f\n", numero-numero2);
			break;
		case 3:
			printf("Insira um valor: ");
			scanf("%f", &numero);
			printf("Insira um valor: ");
			scanf("%f", &numero2);
			printf("A MULTIPLICACAO dos numeros e: %.f\n", numero*numero2);
			break;
		case 4:
			printf("Insira um valor: ");
			scanf("%f", &numero);
			printf("Insira um valor: ");
			scanf("%f", &numero2);
			printf("A DIVISAO dos numeros e: %.1f\n", numero/numero2);
			break;
		case 5:
			printf("Programa FINALIZADO\n");
			break;
		default:
			printf("Invalido!\n");
			break;
	}
}
