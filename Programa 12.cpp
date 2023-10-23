#include<stdio.h>
#include<math.h>

int main()
{
printf("Este programa sirve para realizar las tablas de multipiclar con parametros personalizados\n");
	int i, j, n, r;

printf("\n¿Hasta que tabla de multiplicar desea calcular?: ");
	scanf("%d",&n);

printf("\n¿Hasta que numero desea terminar cada tabla?: ");
	scanf("%d",&r);

for(i=1;i<=n;i++)
{
printf("\n---***---\n\n\t tabla del %d",i);

for(j=1;j<=r;j++)
{
printf("\n%d * %d = %d",i,j,i*j);
}
}

// Programa creado por GA

return 0;
}
