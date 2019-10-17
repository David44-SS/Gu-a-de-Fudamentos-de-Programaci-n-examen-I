#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

float cant;
int b1000,b500,b200,b100,b50,b20,M10,M5,M2,M1,m50,m25;
main(){
printf("Programa que calcula el minimo de billetes y monedas basado en una cantidad dada\n\n");
printf("------Bienvenido------\n\n");
printf("Ingrese una cantidad por favor\n");
scanf("%f",&cant);
if (cant>=1000){
        b1000 = cant/1000;
        cant = (fmod(cant,1000));
}
else
b1000=0;
if (cant>=500){
        b500 = cant/500;
        cant = (fmod(cant,500));
}
else
b500 = 0;
if (cant>=200){
        b200 = cant/200;
        cant = (fmod(cant,200));
}
else
b200=0;
if (cant>=100){
        b100 = cant/100;
        cant = (fmod(cant,100));
}
else
b100=0;
if (cant>=50){
        b50 = cant/50;
        cant = (fmod(cant,50));
}
else b50 = 0;
if (cant>=20){
        b20 = cant/20;
        cant = (fmod(cant,20));
}
else b20 = 0;
if (cant>=10)
{
        M10 = cant/10;
        cant = (fmod(cant,10));
}
else M10 = 0;
if (cant>=5)
{
        M5 = cant/5;
        cant = (fmod(cant,5));
}
else M5 = 0;
if (cant>=2)
{
        M2 = cant/2;
        cant = (fmod(cant,2));
}
else M2 = 0;
if (cant>=1)
{
        M1 = cant/1;
        cant = (fmod(cant,1));
}
else M1 = 0;
if (cant>=0.50)
{
        m50 = cant/0.50;
        cant = (fmod(cant,0.50));
}
else m50 = 0;
if (cant>=0.25)
{
        m25 = cant/0.25;
        cant = (fmod(cant,0.25));
}
else m25 = 0;

printf("billetes de 1000 = %d\n\n",b1000);
printf("billetes de 500 = %d\n\n",b500);
printf("billetes de 200 = %d\n\n",b200);
printf("billetes de 100 = %d\n\n",b100);
printf("billetes de 50 = %d\n\n",b50);
printf("billetes de 20 = %d\n\n",b20);
printf("monedas de 10 = %d\n\n",M10);
printf("monedas de 5 = %d\n\n",M5);
printf("monedas de 2 = %d\n\n",M2);
printf("monedas de 1 = %d\n\n",M1);
printf("monedas de 0.50 = %d\n\n",m50);
printf("monedas de 0.25 = %d\n\n",m25);
}
