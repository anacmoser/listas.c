#include <stdio.h>
int main (){
    int n, x;
    printf("digite o valor de N:");
    scanf("%d", &n);
    if (n<0){
        x=n*-1;
    }
    else{
        x=n;
    }
    printf ("o valor do modulo deste número é: %d", x);
}