#include <stdio.h>
#include <math.h>
int main (){
    float a, b, c, delta, x1, x2, x3, x4;
    printf("digite os valores do coeficiente A, B e C:(em ordem)");
    scanf ("%f%f%f", &a, &b, &c);
    if (a!=0){
        delta=((b*b)-(4*a*c));
        if (delta<0){
            printf("esta equaçao não possui solução");
        }
        else if (delta==0){
            x1=(-b)/(2*a);
            x2=x1;
            printf("a equação tem duas raizes reais e iguais: %f%f", x1, x2);
        }
        else{
            x1= pow((-b)+delta, 0.5)/(2*a);
            x2= pow((-b)+delta, 0.5)/(2*a);
            printf("A equação tem duas raizes reais e diferentes: %f%f", x1, "e", x2);
        }
    }
    
}