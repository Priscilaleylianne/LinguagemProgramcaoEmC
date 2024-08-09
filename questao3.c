#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, delta;
	
	printf("INSERIR O VALOR DE a: \n", a);
	scanf("%f", &a);
	printf("INSERIR O VALOR DE b: \n", b);
	scanf("%f", &b);
	printf("INSERIR O VALOR DE c: \n", c);
	scanf("%f", &c);
	
	delta = pow(b,2) - 4 * a * c;
	
	printf("O VALOR DE DELTA E = %.2f\n", delta);
	return 0;
}

