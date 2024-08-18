#include <stdio.h>
#include <stdlib.h>
int main(){
int n,t,r;
printf("digite a tabuada a ser calculada");
scanf("%d", &n);
r=0;
for(t=0; t<=10; t++){
    r=n*t;
    printf("%dx%d=%d\n",n, t, r);
}
system("pause");
return 0;
}