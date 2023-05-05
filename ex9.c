#include <stdio.h>

/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/

int main(){
    
    int opcao, quantidade, continuar = 1;
    float total = 0.0;

    while (continuar == 1) {
        printf("Escolha uma fruta:\n");
        printf("1 - Abacaxi (R$ 5,00/unidade)\n");
        printf("2 - Maçã (R$ 1,00/unidade)\n");
        printf("3 - Pera (R$ 4,00/unidade)\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de maçãs: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("Total parcial: R$ %.2f\n", total);

        printf("Deseja continuar? (1-Sim / 0-Não) ");
        scanf("%d", &continuar);
    }

    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}
