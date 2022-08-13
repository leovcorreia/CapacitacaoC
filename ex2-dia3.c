#include <stdio.h>

int main() {
    int i;
    int qtdPares, qtdImpares;

    qtdPares = 0;
    qtdImpares = 0;
    int vet[12];
    for (i = 0; i < 12; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0) {
            qtdPares = qtdPares + 1;
        } else {
            qtdImpares = qtdImpares + 1;
        }

    }

    printf("Quantidade de numeros pares = %d", qtdPares);
    printf("\nQuantidade de numeros impares %d", qtdImpares);
    if (qtdPares > qtdImpares) {
        printf("\nEsse programa tem mais numeros pares");
    } else if (qtdImpares > qtdPares) {
        printf("\nEsse programa tem mais numeros impares");
    } else {
        printf("\nEsse programa tem quantidade iguais de numeros pares e impares");
    }

    return 0;
}
