/*
QUEST�O 6
O custo ao consumidor de um carro novo � a soma do custo de f�brica 
com a porcentagem do distribuidor e dos impostos (aplicados ao custo 
de f�brica). Supondo que a porcentagem do distribuidor seja de 12% 
do pre�o de f�brica e os impostos de 30% do pre�o de f�brica, fazer 
um programa para ler o custo de f�brica de um carro e imprimir o custo 
ao consumidor.
*/

#include<stdio.h>
#include<math.h>

int main ()// programa principal
{
    float custo_carro, custo_total; //tipo de dado real

	printf("INSERIR O CUSTO DO CARRO : \n"), custo_carro;
    scanf("%f", &custo_carro);
	//calculo
    custo_total = (0.12 * custo_carro) + (0.30 * custo_carro) + custo_carro;
	//imprime informa��es inseridas
    printf("O VALOR DO CARRO E = %.2f\n",custo_total);
    return 0;
}
