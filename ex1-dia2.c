#include <stdio.h>

int main() {

    double media;

    printf("Digite a media do aluno:");
    scanf("%lf", &media);

    if (media < 5) {
        printf("Sua classificacao = D");
    } else if (media < 7) {
            printf("Sua classifica�ao = C");
    } else if (media < 9) {
            printf("Sua classifica�ao = B");
    } else {
        printf("Sua classifica�ao = A");
    }
return 0;
}
