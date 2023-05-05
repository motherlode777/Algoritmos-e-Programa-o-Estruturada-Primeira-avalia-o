#include <stdio.h>


int main () {
	
int x, y;

	do {
	
	printf("Digite um valor entre 0 e 9 para X: ");
	scanf ("%d", &x);
	
	} while (x < -9 || x > 9);
	
	do {
	
	printf("Digite um valor entre 0 e 9 para Y: ");
	scanf ("%d", &y);
	
	} while (y < -9 || y > 9);


	printf ("x=%d y=%d\n", x, y);
	
	
	//confere origem, eixo x e eixo y
	if (x==0 && y==0) {
		printf ("Origem");
		
	} else if (x==0) {
		printf ("Eixo X");
		
	} else if (y==0) {
		printf ("Eixo Y");
		
	//confere os quadrantes	
	} else if ((x > 0 && x < 10) && (y > 0 && y < 10 )){
		printf ("Q1");
	} else if ((x > -10 && x < 0) && (y > 0 && y < 10 )){
		printf ("Q2");
	} else if ((x > -10 && x < 0) && (y > -10 && y < 0 )){
		printf ("Q3");
	} else if ((x > 0 && x < 10) && (y > -10 && y < 0 )){
		printf ("Q4");
	}
	
	

	
	
	return 0;
}
