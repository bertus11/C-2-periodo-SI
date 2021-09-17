// Autor: Gabriel Bertussi
// Data: 30/08/2021

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int codigo;
	float quantidade,total;
	
	printf("Insira o codigo do produto: ");
	scanf("%d", &codigo);

	switch (codigo)
	{
		case 100:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("Cachorro Quente\n");
			total = quantidade * 8;
			printf("%.2f R$\n", total ); 
			break;
		case 101:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("Bauru\n");
			total = quantidade * 23;
			printf("%.2f R$\n", total ); 
			break;
		case 102:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("X-Bacon\n");
			total = quantidade * 18;
			printf("%.2f R$\n", total ); 
			break;
		case 103:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("Batata Frita\n");
			total = quantidade * 16;
			printf("%.2f R$\n", total ); 
			break;
		case 200:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("Refrigerante em Lata\n");
			total = quantidade * 5;
			printf("%.2f R$\n", total ); 
			break;
		case 201:
			printf("insira a quantidade comprada: ");
			scanf("%f", &quantidade);
			printf("Agua Mineral\n");
			total = quantidade * 3.50;
			printf("%.2f R$\n", total ); 
			break;
	}
}

