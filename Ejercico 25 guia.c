#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

char color;
main(){

printf("------Bienvenido------\n\n");
printf("Introduzca una letra por favor:\n");
scanf("%c",&color);
if(color == 'r' || color == 'R')
   {
    printf("El color seleccionado es rojo\n");
}
else{
    if(color == 'v' || color == 'V')
    {
        printf("El color seleccionado es verde\n");
    }
    else{
        if(color == 'a' || color == 'A'){
            printf("El color seleccionado es azul\n");
        }
        else{
            printf("El color seleccionado es negro\n");
        }
    }
}
printf("----DRSS,1AV6----");
}
