#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
float opt,r,a,l;
printf("Programa que imprime la longitud y area de un circulo\n\n");
printf("----Bienvenido----\n\n");
printf("1.- Obtener la longitud del circulo\n\n");
printf("2.-Obtener el area del circulo\n\n");
scanf("%f",&opt);
printf("Introduzca el valor del radio:\n");
scanf("%f",&r);
if(opt==1){
    l = ((2*3.1416)*r);
printf("El resultado es: %f\n\n",l);
}
else{
    a = (3.1416*(r*r));
printf("El resultado es: %f\n\n",a);
}
printf("----DRSS,1AV6----");
}
