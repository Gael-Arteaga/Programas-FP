#include<stdio.h>

int main()
{
printf("Este programa calcula la comision por venta de autos\n");
	float autoA, autoB, autoC, comision;
	int A=24, B=33, C=38;

printf("\nEscriba la cantidad de autos vendidos del tipo A: ");
	scanf("%f",&autoA);

printf("\nEscriba la cantidad de autos vendidos del tipo B: ");
	scanf("%f",&autoB);

printf("\nEscriba la cantidad de autos vendidos del tipo C: ");
	scanf("%f",&autoC);

        comision=(autoA*A)+(autoB*B)+(autoC*C);

printf("La comision total a pagar es de: %.2f",comision);

// Programa creado por GA

return 0;
}
