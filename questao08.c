//Questa 8) Elabore um programa que solicite ao usu�rio entrar com 
//o valor do dia, m�s e ano (inteiros). Em seguida, imprima os valores lidos 
//separados por uma barra (\). 
#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Entre com o dia, mes e ano: ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("%d/%d/%d", dia, mes, ano);
    return 0;
}


