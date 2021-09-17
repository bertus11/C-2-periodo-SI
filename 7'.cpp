// Programa: 7
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>

main (){
	// variaveis:
	float salhr, numhr,salario;
	
	printf("Insira a o valor do salario por HORA: ");
	scanf("%f", &salhr);
	printf("Insira o numero de HORAS trabalhadas no mes: ");
	scanf("%f", &numhr);
	
	salario = salhr*numhr;
	
	printf("O valor do salario no mes e de: %.2f R$\n", salario);
	system("pause");
}
