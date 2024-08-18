#include <stdio.h>
#include <stdlib.h>
int main(){
int n,t,r;
t=0;
printf("digite a tabuada a ser calculada");
scanf("%d", &n);
while (t<=10){
    r=n*t;
    printf("%d x %d=%d\n",n,t,r);
    t++;
}
system("pause");
return 0;
}