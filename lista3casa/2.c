#include <stdio.h>
#include <stdlib.h>
int main(){
int n=1;
while(n<=20){
    if (n%2==0){
        printf("%d\n",n);
    }
    n++;
}
system("pause");
return 0;
}