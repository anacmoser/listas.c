#include <stdio.h>
#include <stdlib.h>
int main(){
int n4=1;
while (n4<200){
    if (n4%4==0){
    printf("%d\n", n4);
    }
    n4++;
}
system("pause");
return 0;
}