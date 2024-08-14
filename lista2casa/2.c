#include <stdio.h>
#include <stdbool.h>
int main (){
    int n1, c, v, dif;
    printf("digite um numero inteiro entre 0 e 100:");
    scanf("%d", &n1);
    printf("digite o numero chave:");
    scanf("%d", &c);
    if (0<=n1<=100){
        v=true;
    }
    else{
        v=false;
        printf("nao foi possivel calcular o valor digitado");
    }
    if(v==true){
        if(n1>c){
            dif=n1-c;

        }
        else{
            dif=c-n1;
        }
    printf("a diferença entre os números é: %d", dif);
    }
}