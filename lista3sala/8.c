#include <stdio.h>
#include <stdlib.h>
int main(){
int a, p, f;
a=0;
p=1;
for (f=1;f<=15;f++){
    a=a+p;
    printf("%d\n", a);
    p=a-p;
}
system("pause");
return 0;
}