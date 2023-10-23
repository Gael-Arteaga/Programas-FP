#include<stdio.h>

int main()
{
printf("Este programa sirve para comparar precios \n");

	float precio1, precio2, precio3, media;

printf("\nInserta el valor del primer producto: ");
	scanf("%f",&precio1);

printf("\nInserta el valor del segundo producto: ");
	scanf("%f",&precio2);

printf("\nInserta el valor del tercer producto: ");
	scanf("%f",&precio3);

        media=(precio1+precio2+precio3)/3;

printf("\nEl promedio de los costos de los productos es de: %.2f",media);

// Programa creado por GA

return 0;
}
