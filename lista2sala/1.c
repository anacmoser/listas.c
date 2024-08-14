#include <stdio.h>
int main(){
    int n1, n2, n3, m;
    printf("digite a nota 1, 2 e 3:");
    scanf("%d%d%d", &n1, &n2, &n3 );
    m=(n1+n2+n3)/3;
    if (m>=6){
        printf("aluno aprovado %d", m);
    }
    else{
        printf("aluno reprovado %d", m);
    }
}
