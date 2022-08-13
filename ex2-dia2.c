#include <stdio.h>

int main(){

    double x, y, z, maior, menor1, menor2;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);
    printf("Digite o valor de Z: ");
    scanf("%lf", &z);


    // fazendo teste para verificar se é possivel formar o triangulo de acordo com a propriedade la
    if ((x > y) && (x > z)) {
        maior = x;
        menor1 = y;
        menor2 = z;
    } else if (y > z) {
        maior = y;
        menor1 = x;
        menor2 = z;
    } else {
        maior = z;
        menor1 = x;
        menor2 = y;
    }

    if (maior < menor1 + menor2) {
        if ((x == y) && (x == z) && (y == z)) {
            printf("O TRIANGULO FORMADO E = EQUILATERO");
        } else if ((x == y) || (x == z)){
            printf("O TRIANGULO FORMADO E = ISOSCELES");
        } else if ((y == x) || (y == z)) {
            printf("O TRIANGULO FORMADO E = ISOSCELES");
        } else if ((x != y) && (y != z) && (x != z) ){
            printf("O TRIANGULO FORMADO E = ESCALENO");
        }
    } else {
        printf("NAO SERA POSSIVEL FORMAR ESSE TRIANGULO");
    }
    return 0;
}
