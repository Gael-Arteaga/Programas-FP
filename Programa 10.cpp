#include<stdio.h>

int main()
{
printf("Este programa da el promedio de infracciones por turno\n");
	float infraccionesmensuales, infraccionesdiarias, infraccionesmatutino, infraccionesvespertino, infraccionesnocturno;

printf("\nEscribe el numero de infracciones generadas por mes: ");
	scanf("%f",&infraccionesmensuales);

        infraccionesdiarias=infraccionesmensuales/30;
        infraccionesmatutino=infraccionesdiarias*0.20;
        infraccionesvespertino=infraccionesdiarias*0.35;
        infraccionesnocturno=infraccionesdiarias*0.45;

printf("\nEl numero de infracciones ocurridas en el turno matutino son de: %.1f",infraccionesmatutino);
printf("\nEl numero de infracciones ocurridas en el turno vespertino son de: %.1f",infraccionesvespertino);
printf("\nEl numero de infracciones ocurridas en el turno nocturno son de: %.1f",infraccionesnocturno);

// Programa creado por GA

return 0;
}
