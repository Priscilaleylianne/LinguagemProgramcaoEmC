#include<stdio.h>
#include<stdlib.h>
int main()
{
    int var1, var2, Q, R;
    
    printf("Digite o dividendo: ");
    scanf("%d", &var1);
	printf("Digite o divisor: ");
	scanf("%d", &var2);
	Q = var1 / var2;
	R = var1 % var2;
	printf("resultado: %d\n", Q);
	printf("resto: %d", R);
	
	
	int decisao;
	printf("\nDeseja encerrar o programa? \n1 para sim e 2 para nao." );
	scanf("%d", &decisao);
	
}