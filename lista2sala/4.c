#include <stdio.h>
#include <stdbool.h>
int main(){
    float a, b, c, t;
    printf("entre com os valores dos lados dos triangulos:");
    scanf("%d%d%d", &a, &b, &c);
    if ((a<b+c)&&(b<a+c)&&(c<a+b)){
        t=true;
    }
    else{
        t=false;
    }
    if (t==true){
        if((a==b)&& (b==c))
        printf("o triangulo é equilatero!");
    }
        if ((a==b) || (a==c)|| (b==c)){
            printf("o triangulo é isosceles!");
        }
        else{
            printf("o triangulo e escaleno");
        }
    if (t==false){
        printf("o valor dado nao corresponde a um triangulo");
    }
}