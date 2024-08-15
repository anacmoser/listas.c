#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int m2;
    printf("digite o mês:");
    scanf("%d", &m2);
    if (1<m2<12){
        m2==true;
    }
    else{
        m2==false;
        printf("o valor digitado não corresponde a um mes");
    }
    switch (m2){
        case 1:
        printf("o mês e janeiro!");
        break;
        case 2:
        printf("o mês e fevereiro!");
        break;
        case 3:
        printf("o mês e março!");
        break;
        case 4:
        printf("o mês e abril!");
        break;
        case 5:
        printf("o mês e maio!");
        break;
        case 6:
        printf("o mês e junho!");
        break;
        case 7:
        printf("o mês e julho!");
        break;
        case 8:
        printf("o mês e agosto!");
        break;
        case 9:
        printf("o mês e setembro!");
        break;
        case 10:
        printf("o mês e outubro!");
        break;
        case 11:
        printf("o mês e novembro!");
        break;
        case 12:
        printf("o mês e dezembro!");
        break;
        default:
            printf("mês invalido\n");
            break;
    }
    system("pause");
    return 0;
}   