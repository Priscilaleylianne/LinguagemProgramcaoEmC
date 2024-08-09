#include <stdio.h> 
#include <conio.h> 
void main(void)
{
int LINHA, COLUNA; 
char TEXTO[10];
printf("Digite a linha e coluna onde deseja escrever o texto:"); 
scanf("%d,%d", &LINHA, &COLUNA);
printf("\nDigite o texto a ser mostrado:"); 
gets(TEXTO);
clrscr();
gotoxy(COLUNA, LINHA);
puts(TEXTO);
}
