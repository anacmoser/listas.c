#include <stdio.h>
#include <stdlib.h>
int main(){
int n=1;
while(n<=20){
    if (n%2==0){
        printf("numero par:%d\n",n);
    }
    else{
        printf("numero impar %d\n",n);
    }
    n++;
}
system("pause");
return 0;
}