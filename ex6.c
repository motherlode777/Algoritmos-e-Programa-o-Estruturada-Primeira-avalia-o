#include <stdio.h>

/*Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 1.000
que s�o m�ltiplos de 3 ou 5*/

int main () {

int i, soma;

	for (i=1; i<1000; i++){
		
		if ((i%3==0) || (i%5==0)){
			
			soma += i;
			
		}
		
		}
		
	printf ("O valor da soma eh= %d", soma-1);	
	
	return 0;
}
