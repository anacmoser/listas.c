#include <stdio.h>
#include <stdlib.h>
int main(){
int s, n;
s=0;
for (n=0;n<=500;n++){
    if (n%2==0){
        printf("%d",s);
        s=s+n;
    }
}
printf("O somatorio de todos os numeros pares é:%d",s);
system("pause");
return 0;
}