#include <stdio.h>
#include <stdlib.h>
int main(){
int a=1;
while (a<=20){
    if (a%2!=0){
        printf("%d\n", a);
    }
    a++;
}
system("pause");
return 0;
}