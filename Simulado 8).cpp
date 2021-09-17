//SIMULADO N1
//ALUNO: GABRIEL BERTUSSI
//PROF: ANSELMO

#include<stdlib.h>
#include<stdio.h>

int main ()
{
	char turno;
	
	printf("Informe em qual turno voce estuda: \n");
	printf("-----MATUTINO [M]\n");
	printf("-----VESPERTINO [V]\n");
	printf("-----NOTURNO [N]\n");
	printf("\n");
	scanf("%c", &turno);
	
	switch (turno)
	{
		case 'M':
			printf("\n");
			printf("Bom dia!");
			break;
		case 'V':
			printf("\n");
			printf("Boa tarde!");
			break;
		case 'N':
			printf("\n");
			printf("Boa noite!");
			break;
		default:
			printf("\n");
			printf("Valor invalido");
			break;
	}
}
