#include <stdio.h>
#include <stdlib.h>
int main(){
int n=1;
int s=0;
while (n<=100){
    s=s+n;
    printf("%d\n", s);
    n++;
}
printf("a soma dos numeros de 1 até 100 é: %d", s);
system("pause");
return 0;
}