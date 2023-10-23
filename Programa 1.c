#include<stdio.h>
#include<math.h>

int main()
{
printf("Buen dia, este programa sirve para calcular el area de un poligono \n");
	float bmayor, bmenor, h, area;

printf("Por favor, dame el valor de la base mayor: ");
	scanf("%f",&bmayor);

printf("\nDame el valor de la base menor: ");
	scanf("%f",&bmenor);

printf("\nLa altura es de:");
	scanf("%f",&h);

        area=((bmayor*bmenor)*h)/2;

printf("\nEl area del poligono es de: %.2f",area);

// Programa creado por GA

return 0;
}
