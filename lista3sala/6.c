#include <stdio.h>
#include <stdlib.h>
int main(){
int n, q;
n=15;
q=0;
while(n<=200){
    q=n*n;
    printf("%d\n",q);
    n++;
}
system("pause");
return 0;
}