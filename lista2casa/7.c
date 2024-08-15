#include <stdio.h>
#include<stdlib.h>
int main(){
    int cod;
    printf("digite o codigo de acesso ao curso (1 a 5):");
    scanf("%d", &cod);
    switch (cod){
    case 1:
        printf("engenharia");
        break;
    case 2:
        printf("edificações");
        break;
    case 3:
        printf("sistemas eletricos");
        break;
    case 4:
        printf("turismo");
        break;
    case 5:
        printf("analise de sistemas");
        break;
    default:
       printf("codigo invalido");
        break;
    }
    system("pause");
    return 0;
}