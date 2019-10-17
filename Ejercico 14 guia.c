#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char letra;

main(){

printf("Programa que determina si una letra es vocal o consonante\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca una letra por favor\n");
scanf("%c",&letra);

if (letra == 'a' || letra == 'A' ||
    letra == 'e' || letra == 'E' ||
    letra == 'i' || letra == 'I' ||
    letra == 'o' || letra == 'O' ||
    letra == 'a' || letra == 'U'){
    printf("La letra %c es una vocal\n",letra);
}
else{
printf("La letra %c es una consonante",letra);
}
printf("----DRSS,1AV6----");
}
