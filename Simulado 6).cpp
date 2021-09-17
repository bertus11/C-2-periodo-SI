//SIMULADO N1
//ALUNO: GABRIEL BERTUSSI
//PROF: ANSELMO

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int x, y, z;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	printf("Digite um numero inteiro: \n");
	scanf("%d", &y);
	printf("Digite um numero inteiro: \n");
	scanf("%d", &z);
	
	if (x > y and x > z)
	{
		printf("O maior numero e: %d\n", x);
	}
	if (y > x and y > z)
	{
		printf("O maior numero e: %d\n", y);	
	}
	if (z > x and z > y)
	{
		printf("O maior numero e: %d\n", z);
	}
}
