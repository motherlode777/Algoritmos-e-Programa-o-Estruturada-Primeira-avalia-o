#include <stdio.h>
#include <math.h>

/*2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/


int main() {
	
float x1, x2, y1, y2;
float calc;
	
	printf("Digite o valor do x1: ");
	scanf ("%f", &x1);
	printf("Digite o valor do y1: ");
	scanf ("%f", &y1);
	
	printf("Digite o valor do x2: ");
	scanf ("%f", &x2);
	printf("Digite o valor do y2: ");
	scanf ("%f", &y2);

calc = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	
	printf("Distancia = %f", sqrt(calc));	
	
	
	
	return 0;
}
