#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int m,n,q;
q=0;
printf ("digite a base a ser calculada:");
scanf("%d",&n);
printf("digite o expoente a ser calculado:");
scanf ("%d", &m);
q=pow(n,m);
printf("o valor da potencia é:%d", q);
system("pause");
return 0;
}