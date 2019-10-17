#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


main(){
printf("Programa que calcula el peso recomendado de una persona\n\n");
printf("Bienvenido\n\n");
printf("Introduzca su altura en metros por favor\n");
float a,b,c,d,e,f,g;
scanf("%f",&a);
printf("Introduzca su edad por favor\n");
scanf("%f",&b);
if(a==0){
        printf("error\n");
}
else{
c=a*100;
}
if(c==0){
    printf("error\n");
}
else{
    d=b/10;
}
if(d==0){
        printf("error\n");
}
else{
    e=c-100;
}
if(e==0){
        printf("error\n");
}
else{
    f=e+d;
}
if(f==0){
    printf("error\n");
}
else{
    g=f*0.9;
printf("Su peso recomendado es: %f\n",g);
}
printf("----DRSS,1AV6----");
}
