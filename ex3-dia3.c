#include <stdio.h>

int main() {
    int i;
    int qtdPares, qtdImpares;

    int vet[12];
    maior = 0;
    for (i = 0; i < 13; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

        if (vet[i] % 2 == 0) {
            qtdPares = qtdPares + 1;
        } else {
            qtdImpares = qtdImpares + 1;
        }

    }

    printf("Quantidade de n�meros pares = %lf", qtdPares);
    printf("Quantidade de n�meros impares =m%lf", qtdImpares);
    if (qtdPares > qtdImpares) {
        printf("Esse programa tem mais n�meros pares");
    } else if (qtdImpares > qtdPares) {
        printf("Esse programa tem mais n�meros impares");
    } else {
        printf("Esse programa tem quantidade iguais de n�meros pares e impares");
    }

    return 0;
}
