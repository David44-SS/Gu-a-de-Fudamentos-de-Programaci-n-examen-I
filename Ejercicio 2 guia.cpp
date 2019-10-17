#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
printf("------Bienvenido------\n\n");
bool c;
int n=2;
int m=5;
c=(n+m)==2;
printf("%d\n",c);
if(c==0){
    printf("False\n\n");
}else{
    printf("True\n\n");
}

c=(n>m)==!(m==5);
printf("%d\n",c);
if(c==0){
    printf("False\n\n");
}else{
    printf("True\n\n");
}

c=(m%n)>5;
printf("%d\n",c);
if(c==0){
    printf("False\n\n");
}else{
    printf("True\n\n");
}

((m-n)*10)%4==1;
printf("%d\n",c);
if(c==0){
    printf("False\n\n");
}else{
    printf("True\n\n");
}
printf("----DRSS,1AV6----");
}
