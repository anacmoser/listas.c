#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
for(n=0;n<=20;n++){
    if (n%2==0){
        printf("numero par:%d\n",n);
    }
    else{
        printf("numero impar %d\n",n);
    }
}
system("pause");
return 0;
}