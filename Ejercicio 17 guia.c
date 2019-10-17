#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int horas,minutos,segundos;

main(){

printf("Programa que convierte tiempo de segundos a horas, minutos y segundos\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca un numero de segundos por favor\n");
scanf("%d",&segundos);

horas = segundos / 3600;
segundos = segundos % 3600;
minutos = segundos / 60;
segundos = segundos % 60;
printf("Los segundos ingresados equivalen a %d horas %d min. y %d seg.\n\n",horas,minutos,segundos);
printf("----DRSS,1AV6----");
}
