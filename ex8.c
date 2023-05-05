#include <stdio.h>

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

int main(){
    
   int num, maior = -999999, menor = 99999999;
    while (1) {
        printf("Digite um número inteiro (ou um número negativo para sair): ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("O maior número lido foi: %d\n", maior);
    printf("O menor número lido foi: %d\n", menor);

    return 0;
}
