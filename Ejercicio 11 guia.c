#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int a,b,c,d,e,f,g,h,i,j,media,maximo,mediana;

main(){
printf("Programa que calcula la media, moda y mediana de una lista de 10 cantidades ingresadas por el usuario\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca valores en orden ascendente (de menor a mayor)\n\n");
printf("Introduzca el primer valor:\n");
scanf("%d",&a);
printf("Introduzca un valor:\n");
scanf("%d",&b);
printf("Introduzca un valor:\n");
scanf("%d",&c);
printf("Introduzca un valor:\n");
scanf("%d",&d);
printf("Introduzca un valor:\n");
scanf("%d",&e);
printf("Introduzca un valor:\n");
scanf("%d",&f);
printf("Introduzca un valor:\n");
scanf("%d",&g);
printf("Introduzca un valor:\n");
scanf("%d",&h);
printf("Introduzca un valor:\n");
scanf("%d",&i);
printf("Introduzca un valor:\n");
scanf("%d",&j);

media = ((a+b+c+d+e+f+g+h+i+j)/10);
printf("La media es igual a: %d\n\n",media);

maximo = j;
printf("El valor maximo es: %d\n\n",j);

mediana = (e+f);
printf("La mediana es igual a: %d\n\n",mediana);
printf("----DRSS,1AV6----");
}
