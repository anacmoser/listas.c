#include <stdio.h>
int main (){
    int n1, n2, n3;
    printf("digite os números:");
    scanf("%d%d%d", &n1, &n2, &n3);
    if ((n1%2==0)&&(n1%3==0)||(n2%2==0) && (n2%3==0) || (n3%2==0) &&(n3%3==0)){
        if ((n1%2==0) && (n1%3==0)){
            printf("numero divisivel por 2 e 3:  %d", n1);
        }
        if ((n2%2==0) && (n2%3==0)){
            printf("numero divisivel por 2 e 3:  %d", n2);
        }
        if ((n3%2==0) && (n3%3==0)){
            printf("numero divisivel por 2 e 3:  %d", n3);
        }
    }
    else{
        printf("print não foi digitado nenhum numero divisivel por 2 e 3:");
    }
}