#include <stdio.h>

/*1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:

DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)
*/




int main() {
	
float valores[3], diferenca;
int i; 


	for (i=0; i<4; i++){
		printf ("Digite o valor do numero %d: ", i+1);
		scanf ("%f", &valores[i]);
	}

diferenca = (valores[0] * valores[1]) - (valores[2] * valores[3]);
	
	printf ("DIFERENCA = %f * %f - %f * %f\n", valores[0], valores[1], valores[2], valores[3]);
	
	printf ("DIFERENCA = %f ", diferenca);
	return 0;
}
