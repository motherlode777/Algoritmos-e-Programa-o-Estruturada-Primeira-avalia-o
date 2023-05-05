#include <stdio.h>

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

int main () {
	
int n;
int i;

printf ("Digite um numero: ");
scanf ("%d", &n);

printf ("Os divisores do numero %d sao: ", n);
	
	for (i=1; i<=n; i++){
		
		if (n%i == 0){
			printf ("%d ", i);
		}
	
	}
	
		
	return 0;
}
