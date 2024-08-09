#include <stdio.h>

int main(void) {
    int N1, N2, N3, numero, aux;

    scanf("%d",&numero);

    N1 = numero / 100;
    aux = numero % 100;
    N2 = aux / 10;
    N3 = aux % 10;
    numero = (N3 * 100) + (N2 * 10) + N1;

    printf("O NUMERO INVERTIDO = %d\n",numero);
    return 0;
}
