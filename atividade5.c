/*
QUESTÃO 5
Fazer um programa para ler os valores dos 
coeficientes A, B e C de uma equação quadrática 
e calcular e imprimir o valor do discriminante (delta).
*/
#include<stdio.h>
#include<math.h>

int main ()// programa principal
{
    float a, b, c, delta; //tipo de dado real

    printf("INSERIR O VALOR DE A: \n"), a;//10
    scanf("%f",&a);
    printf("INSERIR O VALOR DE B: \n"), b;//15^2
    scanf("%f",&b);
    printf("INSERIR O VALOR DE C: \n"), c;//4
    scanf("%f",&c);
	//calculo
    delta = pow(b,2) - 4 * a * c;  
	//imprime informações inseridas    
    printf("O VALOR DE DELTA E = %.2f\n",delta);
    return 0;
}
