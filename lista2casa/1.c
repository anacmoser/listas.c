#include <stdio.h>
int main(){
    int n;
    printf("digite um numero:");
    scanf("%d", &n);
    if (n%2==0){
        printf("o numero é par");
    }
    else{
        printf("o numero é impar");
    }
}