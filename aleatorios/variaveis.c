#include <stdio.h>
int main(){
    int idade=0;
    int ano=0;
    printf("digite a idade e o ano:\n");
    scanf("%d %d", &idade, &ano);
    printf("idade informada:%d.\n", idade);
    printf("ano informado:%d.\n", ano);
    return 0;
    **//o ideal é utilizar um scanf e um printf para cada variavel, para evitar erros de semantica
}