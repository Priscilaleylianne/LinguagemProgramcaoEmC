/*
QUESTÃO 8
Desenvolver um algoritmo para ler o nome, idade e peso de três pessoas. 
Calcular e imprimir a idade e o peso médio das três pessoas.
*/
#include<stdio.h>
#include<math.h>

int main()// programa principal
{
    char nome1,nome2,nome3;// tipo de dado caracter
    int idade1, idade2, idade3;// tipo de dado inteiro
    float peso1, peso2, peso3, pesomedio; //tipo de dado real

    printf("INSERIR NOME 1: \n"), nome1;
    scanf("%s",&nome1);
    printf("INSERIR IDADE 1: \n"), idade1;
    scanf("%d",&idade1);
    printf("INSERIR PESO 1: \n"), peso1;
    scanf("%f",&peso1);

    printf("\nINSERIR NOME 2: \n"), nome2;
    scanf("%s",&nome2);
    printf("INSERIR IDADE 2: \n"), idade2;
    scanf("%d",&idade2);
    printf("INSERIR PESO 2: \n"), peso2;
    scanf("%f",&peso2);

    printf("\nINSERIR NOME 3: \n"), nome3;
    scanf("%s",&nome3);
    printf("INSERIR IDADE 3: \n"), idade3;
    scanf("%d",&idade3);
    printf("INSERIR PESO 3: \n"), peso3;
    scanf("%f",&peso3); 
 	// calculo
    pesomedio = (peso1 + peso2 + peso3) / 3;
	//imprime informações inseridas
    printf("\nIDADE 1 = %d\n",idade1);
    printf("\nIDADE 2 = %d\n",idade2);
    printf("\nIDADE 3 = %d\n",idade3);
    printf("O PESO MEDIO E = %.2f\n",pesomedio);

    return 0;
}
