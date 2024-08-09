#include <stdio.h> 
int main (void)
{
	int a,b;
	printf("Digite dois numeros inteiros:"); 
	scanf("%d %d", &a, &b);
	
		if ((a < 0) && (b < 0))
	{
		printf("\nForam digitados 2 numeros negativos.");
	}
	return 0;
}
