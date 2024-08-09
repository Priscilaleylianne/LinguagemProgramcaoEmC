/*
	QUEST�O 2
Um fabricante de latas deseja desenvolver um algoritmo para calcular 
o custo de uma lata cil�ndrica de alum�nio, sabendo-se que o custo do 
alum�nio por m�  � R$100,00.
*/
#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define valormetro 100

int main()// progrma principal
{
	float raio, altura, arealata, valortotal; // tipo de dado real
	
	printf("INSERIR O VALOR DO RAIO: \n", raio); 
	scanf("%f", &raio);
	printf("INSERIR O VALOR DO ALTURA: \n", altura);
	scanf("%f", &altura);
	// calculo
	arealata = (pi * pow(raio,2) * 2) + (2 * pi * raio * altura);
	valortotal = arealata * valormetro;
	//imprime informa��es inseridas
	printf("O VALOR DO CUSTO E = %2f\n", valortotal);
	
return 0;
}

/*
	Calcula o valor de um n�mero elevado a uma pot�ncia. pow() pode 
	ser usada para transformar um n�mero em uma pot�ncia fracion�ria. 
	Isso pode ser �til para gerar mapeamentos exponenciais de valores 
	ou curvas
*/
