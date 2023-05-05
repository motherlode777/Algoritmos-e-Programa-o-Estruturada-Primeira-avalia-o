#include <stdio.h>

/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/

int main(){
    
    int i, numero, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("Média: %.2f\n", (float) soma / 10.0);

    return 0;
}
