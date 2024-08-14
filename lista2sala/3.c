#include <stdio.h>
int main(){
    int a, b, d;
    printf("digite os valores numericos:");
    scanf("%d%d", &a, &b);
    if (a>b){
        d=a-b;
        printf("a diferença é %d", d);
    }
    else{
        d=b-a;
        printf("a diferença e: %d", d);
    }
    
}