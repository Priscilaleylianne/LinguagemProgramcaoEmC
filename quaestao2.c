#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int z = 9;

int main(){
	float x;
	float y = 3;
	
	x = 5;
	printf("x = %f\n", x);
	
	x = z;
	printf("x = %f\n", x);
	
	x = y + 5;
	printf("x = %f\n", x);
	
	x = sqrt (9);
	printf("x = %f\n", x);
	
	return 0;
}
