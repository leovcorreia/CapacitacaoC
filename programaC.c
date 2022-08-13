#include <stdio.h>

int main (){
   int idade, nascimento, ra;
   char nome[50];
   double altura;

   printf("Qual seu nome? ");
   scanf("%s", &nome);

   printf("Qual sua altura? ");
   scanf("%lf", &altura);

   printf("Qual a sua idade? ");
   scanf("%d", &idade);

   printf("Qual seu ano de nascimento? ");
   scanf("%d", &nascimento);

   printf("Qual o seu RA? ");
   scanf("%d", &ra);

   printf("Nome: %s\n", nome);
   printf("Altura: %.2lf\n", altura);
   printf("Idade: %d\n", idade);
   printf("Ano nascimento: %d\n", nascimento);
   printf("RA: %d\n", ra);

   return 0;
}
