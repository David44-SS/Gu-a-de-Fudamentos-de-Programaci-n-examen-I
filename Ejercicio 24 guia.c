#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int opt,cal,tem,frio;

main(){
printf("------Bienvenido------\n\n");
printf("Introduzca un valor (entero):\n");
scanf("%d",&opt);

if(opt==1){
    printf("Calor\n");
}
else{
    if(opt==2){
        printf("Templado\n");
    }
    else{
        if(opt==3){
            printf("Frio\n");
        }
        else{
            printf("Fuera de rango\n");
        }
    }
}
}
