#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int n,s,r;
n=3;
r=0;
for(s=0; s<=15; s++){
    r=pow(n,s);
    printf("3^%d=%d\n",s,r);
}
system("pause");
return 0;
}