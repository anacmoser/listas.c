#include <stdio.h>
int main(){
    int n1, n2, m, ne, nm;
    printf("digite a nota 1 e 2:");
    scanf("%d%d", &n1, &n2 );
    m=(n1+n2)/2;
    if (m>=6){
        printf("aluno aprovado %d", m);
    }
    else if(m<6){
        printf("entre com a nota de exame:");
        scanf("%d", &ne);
        nm=ne+m;
        if (nm>=5){
            printf("aluno aprovado %d", nm);
        }
        else{
            printf("aluno reprovado %d", nm);
        }
    }
}
