#include <stdio.h>

int main() {

    int i, x, cont;

    cont = 0;
    for (i = 0; i < 7; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if (x > 8) {
            cont = cont + 1;
        }
    }
    printf("A quantidade de numeros maiores que 8: %d", cont);
}
