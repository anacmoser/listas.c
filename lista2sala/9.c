#include <stdio.h>
int main (){
    int n1, n2;
    printf("digite os números:");
    scanf("%d%d", &n1, &n2);
    if ((n1%4==0)||(n1%5==0)||(n2%4==0) || (n2%5==0)){
        if ((n1%4==0) && (n1%5==0)){
            printf("numero divisivel por 4 ou 5:  %d", n1);
        }
        if ((n2%4==0) && (n2%5==0)){
            printf("numero divisivel por 4 ou 5:  %d", n2);
        }
    }
    else{
        printf("print não foi digitado nenhum numero divisivel por 4 ou 5:");
    }
}