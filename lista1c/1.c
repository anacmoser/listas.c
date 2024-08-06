
#include <stdio.h>
int main(){
    float tempo, vm, dis, lu;
    printf("digite o tempo gasto na viagem(em horas)");
    scanf("%f", &tempo);
    printf("digite a velocidde média da viagem(em km/h)");
    scanf("%f", &vm);
    dis=tempo*vm;
    lu=dis/12;
    printf("velocidade média: %.2f km/h\n", vm);
    printf("tempo gasto na viagem: %.2f horas\n", tempo);
    printf("quantidade de litros uados na viagem: %.2f litros\n", lu);

    return 0;
}