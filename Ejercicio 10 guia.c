#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

float lit,cost;

main(){
printf("Programa que calcula el gasto de agua de una familia dado su consumo en litros\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca el numero de litros consumidos por favor\n");
scanf("%f",&lit);
if (lit<=50){
printf("El costo es de: 200 pesos\n");
}
else{
if (50>lit<200){
cost = ((lit*10)+200);
    printf("El costo es de: %f pesos\n",cost);
}
else{
if (lit>=200){
cost = ((lit*20)+200);
printf("El costo es de: %f pesos\n",cost);
}
}
}
printf("----DRSSS,1AV6----");
}
