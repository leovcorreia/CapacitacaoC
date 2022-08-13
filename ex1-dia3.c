#include <stdio.h>

int main() {
    int i;
    double soma;

    double vet[9];
    soma = 0;
    for (i = 0; i < 9; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    printf("A soma dos valores digitados = %lf", soma);

    return 0;
}
