// Programa: 9,10
// Autor: Gabriel Bertussi
// Data de Criação: 04/08/21
// Data de Modificação: 09/08/21

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

main (){
	//variaveis
	float numreal,numint1,numint2;
	
	printf("Insira um valor INTEIRO: ");
	scanf("%f", &numint1);
	printf("Insira um valor INTEIRO: ");
	scanf("%f", &numint2);
	
	printf("Insira um valor REAL: ");
	scanf("%f", &numreal);
	
	printf("O PRODUTO do DOBRO DO PRIMEIRO com METADE DO SEGUNDO: %.f\n", (numint1*2)*(numint2/2));
	printf("A SOMA do TRIPLO DO PRIMEIRO com o TERCEIRO: %.1f\n", (numint1*3)+numreal);
	printf("O TERCEIRO ELEVADO AO CUBO: %.f\n", pow(numreal,3));
	
	system("pause");
	
}
