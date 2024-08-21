#include <stdio.h>
int main (){
    char n;
    printf("digite um numero (de 1 a 4) e E para sair");
    scanf("%c", &n);
    switch (n)
    {
    case 1:
        printf("operação de deposito");
        break;
    case 2:
        printf("operação de saque");
        break;
    case 3:
        printf("operação de extrato");
        break;
    case 4:
        printf("operação de transferencia");
        break;
    case 'E':
        break;
    
    default:
        printf("operação invalida");
        break;
    }
}