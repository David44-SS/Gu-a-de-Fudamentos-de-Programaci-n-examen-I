#include <conio.h>
#include <stdio.h>

int main()
{
int a,b,c;
printf("Programa que compara 3 numeros enteros e indica cual es el mayor\n\n");
printf("------Bienvenido------\n\n");
printf("Introduzca el primer numero entero:\n");
scanf("%d",&a);
printf("Introduzca el segundo numero entero:\n");
scanf("%d",&b);
printf("Introduzca el tercer numero entero:\n");
scanf("%d",&c);

if (a>=b && a>=c ){
        printf("%d es el mayor.\n",a);
}
else{
if (b>c){
printf("%d es el mayor.\n",b);
}
else{
printf("%d es el mayor.\n\n",c);
}
}
printf("----DRSS,1AV6----");
}
