#include <stdio.h>

int main()
{
printf("Este programa calcula el aumento y disminucion mensual de una poblacion\n");
    int n, aumento_mensual, disminucion_mensual, poblacion_final;
    float aumento_anual, disminucion_anual;

printf("\nIngrese el número de habitantes iniciales: ");
    scanf("%d", &n);

        aumento_anual = (1.8 + 1.7 - 2 - 1.1) / 100 * n;
        disminucion_anual = (2 + 1.1) / 100 * n;

        aumento_mensual = aumento_anual / 12;
        disminucion_mensual = disminucion_anual / 12;

        poblacion_final = n + aumento_anual - disminucion_anual;

printf("\nAumento mensual promedio: %d\n", aumento_mensual);
printf("Disminución mensual promedio: %d\n", disminucion_mensual);
printf("Población final: %d\n", poblacion_final);

// Programa creado por GA

return 0;
}
