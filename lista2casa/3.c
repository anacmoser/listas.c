#include <stdio.h>
#include <stdlib.h>
int main(){
    float n, nvn;
    printf("digite a nota:");
    scanf("%f", &n);
    if(n - (int)n >= 0.5){
        nvn=(int)n+1;
        
    }
    else{
        nvn=(int)n;
    }
    printf("%.0f", nvn);
    system ("pause");
}