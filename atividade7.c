/*
QUEST�O 7
Desenvolver um algoritmo para ler os comprimentos dos tr�s 
lados de um tri�ngulo (L1, L2 e L3) e calcular a �rea do tri�ngulo.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    float L1, L2, L3, area_triangulo, T;

    printf("INSERIR LADO 1: \n"), L1;
    scanf("%f",&L1);
    printf("INSERIR LADO 2: \n"), L2;
    scanf("%f",&L2);
    printf("INSERIR LADO 3: \n"), L3;
    scanf("%f",&L3);
	
    T =(L1 + L2 + L3) / 2;
    area_triangulo = sqrt( T * (T - L1) * (T - L2) * (T - L3));
	
    printf("A AREA DO TRIANGULO E = %.2f\n", area_triangulo);
    return 0;
}
