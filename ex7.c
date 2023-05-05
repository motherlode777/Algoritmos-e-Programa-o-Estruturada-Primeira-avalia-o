#include <stdio.h>

/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/


int main(){
	
int n, a = 0, b = 1, fib, i;


printf("Digite a casa de Fibonacci que deseja retornar (de 1 a infinito):  ");
scanf ("%d", &n);


	if (n == 1){
		printf ("Fibonacci = 0");
		
	} else if (n == 2) {
		printf ("Fibonacci = 1");
			
	} else {
		
		for (i=2; i<n; i++){
			fib = a + b;
            a = b;
            b = fib;
		}
		
	}
	
	printf ("Fibonacci = %d", fib);
	
	
	
	return 0;
}
