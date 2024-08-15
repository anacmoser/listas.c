#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    float sb, ht, sl, e, i, adhe, he, vh;
    printf("digite o salario bruto");
    scanf("%f", &sb);
    e=0.0f;
    i=0.0f;
    if (sb<800){
        e=0.0f;
        i=0.0f;
    }
    else if (sb<1600){
        e= sb * 0.05f;
        i= sb * 0.08f;
    }
    else if (sb>1600){
        e=sb * 0.17f;
        i=sb * 0.15f;
    }
    printf("digite as horas trabalhadas");
    scanf("%f", &ht);
    adhe=0.0f;
    if (ht>160){
        he=ht-160;
        vh=sb/160;
        adhe=he*vh*0.5f;
    }
    sl=sb-(e+i)+adhe;
    printf("o salario liquido é: %.2f", sl);
    system("pause");
    return 0;

}