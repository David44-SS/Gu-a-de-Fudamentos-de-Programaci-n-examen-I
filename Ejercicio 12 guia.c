#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
printf("------Bienvenido------\n");
int i;
int a;
int j;
scanf("%d",&a);
for(i=1;i<=a;i++){
for(j=1;j<=i-1;j++){
    printf("%d",j);
}
printf("%d\n",j);
}
printf("----DRSS,1AV6----\n");
}
