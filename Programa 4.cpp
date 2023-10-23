#include<stdio.h>

int main()
{
printf("Este programa sirve para calcular su cambio\n");
	float precio, pago, cambio;

printf("\nEscriba el precio del producto a pagar: ");
	scanf("%f",&precio);

printf("\nEscriba la cantidad de dinero que dara para pagar: ");
	scanf("%f",&pago);

        cambio=pago-precio;

printf("\nEl cambio que debe de recibir es de: %.2f",cambio);

// Programa creado por GA

return 0;
}
