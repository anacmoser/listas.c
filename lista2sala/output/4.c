#include <stdio.h>

int main() {
  int a, b, c;
  int triangulo = 1; // 1 para True

  printf("Digite o valor do 1º lado do triangulo: ");
  scanf("%d", &a);

  printf("Digite o valor do 2º lado do triangulo: ");
  scanf("%d", &b);

  printf("Digite o valor do 3º lado do triangulo: ");
  scanf("%d", &c);

  if (a < b + c && b < a + c && c < a + b) {
    triangulo = 1; // 1 para True
  } else {
    triangulo = 0; // 0 para False
  }

  if (triangulo) {
    if (a == b && b == c) {
      printf("O triangulo e equilatero\n");
    } else if (a == b || a == c || b == c) {
      printf("O triangulo e isosceles\n");
    } else {
      printf("O triangulo e escaleno\n");
    }
  } else {
    printf("O valor dado nao corresponde a um triangulo\n");
  }

  return 0;
}