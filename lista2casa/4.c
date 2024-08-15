#include <stdio.h>
#include <stdlib.h>
int main (){
    int a, b, c;
    printf("digite os valores de a, b e c: ");
    scanf("%i%i%i", &a, &b, &c);
     if ((a > b) && (b > c)) {
        printf("%i, %i, %i\n", a, b, c);
    }
    else if ((b > a) && (a > c)) {
        printf("%d, %d, %d\n", b, a, c);
    }
    else if ((c > b) && (b > a)) {
        printf("%d, %d, %d\n", c, b, a);
    }
    else if ((a > c) && (c > b)) {
        printf("%d, %d, %d\n", a, c, b);
    }
    else if ((c > a) && (a > b)) {
        printf("%d, %d, %d\n", c, a, b);
    }
    else if ((b > c) && (c > a)) {
        printf("%d, %d, %d\n", b, c, a);
    }
    system("pause");
    return 0;

}