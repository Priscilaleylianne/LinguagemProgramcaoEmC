/*
QUESTÃO 3
Teorema de Pitágoras: H^2 = L1^2 + L2^2. Tem uma infinidade de números 
com essa combinação. Dado dois números inteiros positivos, M e N, 
onde M > N, desenvolver um algoritmo para entrar com dois números 
positivos e fornecer os valores dos lados e da Hipotenusa do triângulo
 gerados combinando Me N.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	float L1, L2, M, N, HIPOTENUSA; // tipo de dado real
	
	printf("INSERIR O VALOR M: \n", M);
	scanf("%f", &M);
	printf("INSERIR O VALOR N: \n", N);
	scanf("%f", &N);
	// calculo
	L1 = pow(M,2) - pow(N,2);
	L2 = 2 * M * N;
	HIPOTENUSA = pow(M,2) + pow(N,2);
	//imprime informações inseridas
	printf("L1 = %2f\n", L1);
	printf("L2 = %2f\n", L2);
	printf("HIPOTENUSA = %2f\n", HIPOTENUSA);
	return 0;
}

