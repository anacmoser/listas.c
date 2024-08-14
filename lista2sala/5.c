#include <stdio.h>
#include <stdlib.h>
int compare_ints(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int values[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &values[i]);
    }
    qsort(values, 3, sizeof(int), compare_ints);

    printf("Valores em ordem crescente: %d %d %d\n", values[0], values[1], values[2]);

    return 0;
}
