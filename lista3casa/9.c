#include <stdio.h>
#include <stdlib.h>
int main(){
int n=0;
do
{
    if(n%2==0){
        printf("numero par: %d\n",n);
    }
    else{
        printf("numero impar: %d\n",n);
    }
    n++;
} while(n<=20);
system("pause");
return 0;
}