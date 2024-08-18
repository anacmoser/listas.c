#include <stdio.h>
#include <stdlib.h>
int main(){
float a,b,r;
char op;
while(1){
printf("digite uma operação(+, -, *, /) ou 's' para sair: ");
scanf("%c", &op);
if (op=='s'){
        printf("saindo do programa...");
        break;
    }
if (op== '+' || op == '-' || op == '*' || op == '/'){
    printf("digite o primeiro numero:");
    scanf("%f",&a);
    printf("digite o segundo numero:");
    scanf("%f",&b);
    if(op=='+'){
        r=a+b;
        printf("resultado=%.2f", r);
    }
    else if(op=='-'){
        r=a-b;
        printf("resultado=%.2f", r);
    }
    else if(op=='*'){
        r=a*b;
        printf("resultado=%.2f", r);
    }
    else if(op=='/'){
        if (b!=0){
            r=a/b;
            printf("resultado=%.2f", r);
        }
        else{
            printf("erro: divisão por zero não é permitida.");
        }
    }
}
else{
    printf("operação invalida, tente novamente.");
}
}
system("pause");
return 0;
}