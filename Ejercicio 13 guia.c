#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int a,i,cant;

main(){
a=0;
printf("Programa que determina si un numero es primo o no lo es\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca un valor:\n\n");
scanf("%d",&cant);
for(i=1;i<=cant;i++){
    if (cant%i==0)
        a++;
}
if (cant==2){
    printf("El numero ingresado es primo\n\n");

}
else{
    printf("El numero ingresado no es primo\n\n");
}
}
