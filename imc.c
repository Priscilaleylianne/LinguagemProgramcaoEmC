//Questão 11) Escrever um programa que receba o valor do peso e altura 
//de uma pessoa e calcule seu IMC pela fórmula [IMC = / (altura * altura)].
//Exibir o valor do IMC calculado
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, altura, imc;
	scanf("%f %f", &peso ,&altura);
	
	imc = peso/(altura*altura);
	printf("O IMC eh %f.\n", imc);
	
	system("pause");
	return 0;
}


