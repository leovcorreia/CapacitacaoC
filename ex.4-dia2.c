#include <stdio.h>

int main () {
    int num, maior, menor;

    printf("Digite o numero: ");
    scanf("%d", &num);

    maior = 0;
    menor = 0;
    while (num != 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        printf("Digite outro numero: ");
        scanf("%d", &num);
    }
    printf("O MAIOR NUMERO = %d\n", maior);
    printf("O MENOR NUMERO = %d", menor);
}
