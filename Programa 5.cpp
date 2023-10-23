#include<stdio.h>
#include<math.h>

int main()
{
printf("Este programa sirve para calcular el area de un circulo\n");
	float radio, area, PI=3.1416;

printf("\nInserta el radio del circulo: ");
	scanf("%f",&radio);

        area=PI*radio*radio;

printf("\nEl area del circulo es de: %.2f",area);

// Programa creado por GA

return 0;
}
