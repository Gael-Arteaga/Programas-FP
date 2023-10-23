#include<stdio.h>
#include<math.h>

int main()
{
printf("Este programa sirve para calcular el gasto de gasolina \n");
	int VehTur, VehTodt;
	int CapacidadTur, CapacidadTodt;
	int GasolinaNes;

printf("\nInserta el numero de vehiculos para turismo: ");
	scanf("%d",&VehTur);

printf("\nInserta el numero de vehiculos todo terreno: ");
	scanf("%d",&VehTodt);

printf("\nInserta la capacidad en litros de gasolina para turismo: ");
	scanf("%d",&CapacidadTur);

printf("\nInserta la capacidad en litros de gasolina para todo terreno: ");
	scanf("%d",&CapacidadTodt);

        GasolinaNes=(VehTur*CapacidadTur)+(VehTodt*CapacidadTodt);

printf("\nLos litros de combustible requeridos para todos los vehiculos es de: %d",GasolinaNes);

// Programa creado por GA

return 0;
}
