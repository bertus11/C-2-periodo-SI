//SIMULADO N1
//ALUNO: GABRIEL BERTUSSI
//PROF: ANSELMO

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float a, b, c;
	
	printf("Insira um numero: ");
	scanf("%f", &a);
	printf("Insira um numero: ");
	scanf("%f", &b);
	printf("Insira um numero: ");
	scanf("%f", &c);
	
	if (a >= b and a >=c and b >= c)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (a), (b), (c));
	}
	else if (b >= a and b >= c and a >= c)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (b), (a), (c));
	}
	else if (c >= a and c >= b and a >= b)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (c), (a), (b));
	}
	else if (a >= b and a >= c and c >=b)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (a), (c), (b));
	}
	else if (b >= a and b >= c and c >= a)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (b), (c), (a));
	}
	else if (c >= a and c >= b and b >= a)
	{
		printf("A ordem descrescente e: %.f %.f %.f\n", (c), (b), (a));
	}
}
