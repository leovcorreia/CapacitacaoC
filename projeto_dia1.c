#include <stdio.h>

int main() {

    int qtdArroz, qtdFeijao, qtdOvos, qtdRefri, qtdSalgadinho;

    double precoArroz = 14.50, precoFeijao = 8.20, precoOvos = 6.50, precoRefri = 4.00, precoSalgadinho = 2.50;
    double valorCompra, valorRecebido, troco, valorRestante;

    printf("Digite a quantidade de pacotes de arroz que foram comprados: ");
    scanf("%d", &qtdArroz);

    printf("Digite a quantidade de pacotes de feijao que foram comprados: ");
    scanf("%d", &qtdFeijao);

    printf("Digite a quantidade de pacotes de ovos que foram comprados: ");
    scanf("%d", &qtdOvos);

    printf("Digite a quantidade de refrigerantes que foram comprados: ");
    scanf("%d", &qtdRefri);

    printf("Digite a quantidade de pacotes de salgadinho que foram comprados: ");
    scanf("%d", &qtdSalgadinho);

    valorCompra = (qtdArroz*precoArroz) + (qtdFeijao*precoFeijao) + (qtdOvos*precoOvos) + (qtdRefri*precoRefri) + (qtdSalgadinho*precoSalgadinho);

    printf("Valor total da compra: %.2lf", valorCompra);
    printf("\nValor recebido pelo caixa: ");
    scanf("%lf", &valorRecebido);

    troco = valorRecebido - valorCompra;

    if (valorRecebido < valorCompra) {
        valorRestante = valorCompra - valorRecebido;
        printf("DINHEIRO INSUFICIENTE! \n");
        printf("Valor restante para completar a compra: %.2lf reais", valorRestante);
    }
    else {
        printf("TROCO = R$%.2lf reais", troco);

    }

    return 0;
}
