#include <stdio.h>

int main()
{
int fecha, anio,mes, dia;

double num=10;
int exp=6;
printf("ingrese su fecha de nacimiento en DDMMAAAA: ");
scanf ("%d",&fecha);

anio=fecha%10000;
mes=(fecha/1000)%100;
dia=fecha/pow(num,exp);

printf("anios %d\t",anio);
printf("mes %d\t\t",mes);
printf("dias %d",dia);


}
