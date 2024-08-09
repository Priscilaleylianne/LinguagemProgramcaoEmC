/*
QUESTÃO 6
O custo ao consumidor de um carro novo é a soma do custo de fábrica 
com a porcentagem do distribuidor e dos impostos (aplicados ao custo 
de fábrica). Supondo que a porcentagem do distribuidor seja de 12% 
do preço de fábrica e os impostos de 30% do preço de fábrica, fazer 
um programa para ler o custo de fábrica de um carro e imprimir o custo 
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
	//imprime informações inseridas
    printf("O VALOR DO CARRO E = %.2f\n",custo_total);
    return 0;
}
