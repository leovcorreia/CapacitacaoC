#include <stdio.h>

int main() {

    double media;

    printf("Digite a media do aluno:");
    scanf("%lf", &media);

    if (media < 5) {
        printf("Sua classificacao = D");
    } else if (media < 7) {
            printf("Sua classificaçao = C");
    } else if (media < 9) {
            printf("Sua classificaçao = B");
    } else {
        printf("Sua classificaçao = A");
    }
return 0;
}
