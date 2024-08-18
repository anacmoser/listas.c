#include <stdio.h>
#include <stdlib.h>
int main(){
int a,maior,menor, i;
printf("digite um valor:");
scanf("%d", &a);
maior=a;
menor=a;
for (i=1;i<=4;i++){
    printf("digite um valor:");
    scanf("%d",&a);
    if(a>maior){
        maior=a;
    }
    if(a<menor){
        menor=a;
    }
}
printf("o maior valor é:%d", maior);
printf("o menor valor é:%d", menor);
system("pause");
return 0;
}