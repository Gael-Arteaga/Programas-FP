#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
printf("Este programa da el promedio general de calificaciones de 5 alumnos");
    int i,j;
	int calif, suma1=0, suma2=0;
	float promedio1, promedio2;

for(i=1;i<=5;i++)
{
printf("\n\nCalificaciones alumno %d\n",i);

for(j=1;j<=3;j++)
{
printf("\tInserta el valor de la calificacion %d:",j);
    scanf("%d",&calif);

			suma1=suma1+calif;
}
            promedio1=(suma1)/3;

printf("\n\tEl promedio del alumno es de: %.2f",promedio1);

            suma2=suma2+promedio1;
            suma1=0;
}
        promedio2=(suma2)/5;

printf("\nEl promedio general es de: %.2f",promedio2);

// Programa creado por GA

return 0;
}
