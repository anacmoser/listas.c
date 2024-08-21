#include <stdio.h>
int main(){
    float t, saldo;
    printf("digite o saldo bancario:");
    scanf("%f", &saldo);
    printf("digite a tarifa bancaria:");
    scanf("%f", &t);
    
    if (saldo==1000){
        t=t*0.8;
        printf("a taxa é %.2f", t);
    }
    else if (saldo==3000){
        t=t*0.75;
        printf("a taxa é %.2f", t);
    }
    else if (saldo==5000){
        t=t*0.5;
        printf("a taxa é %.2f", t);
    }
     return 0;
    
}