#include <stdio.h>
#include <stdlib.h>
int main(){
int n, p;
p=0;
printf("digite um numero menor ou igual a 50:");
scanf("%d", &n);
if (n<=50){
    p=n;
    while (p<250){
        printf("%d\n",p);
        p=p*3;
    }
}
else
printf("o número digitado é maior que 50");
system("pause");
return 0;
}