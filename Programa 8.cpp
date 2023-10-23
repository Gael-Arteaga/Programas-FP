#include<stdio.h>

int main()
{
printf("Este programa calcula su sueldo mas sus comisiones por venta");
	float venta1, venta2, venta3, sueldobase, comisiones, total;

printf("Escriba la ganancia de la primera venta: ");
	scanf("%f",&venta1);

printf("\nEscriba la ganancia de la segunda venta: ");
	scanf("%f",&venta2);

printf("\nEscriba la ganancia de la tercera venta: ");
	scanf("%f",&venta3);

        sueldobase=venta1+venta2+venta3;
        comisiones=(venta1*0.10)+(venta2*0.10)+(venta3*0.10);
        total=sueldobase+comisiones;

printf("\nEl dinero que gana por comisiones es de: %.2f",comisiones);
printf("\nEl dinero que gana en total es de: %.2f",total);

// Programa creado por GA

return 0;
}
