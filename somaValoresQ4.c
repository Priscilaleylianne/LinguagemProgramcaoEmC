#include <stdio.h>

int main(){
	int fib[15];
	
	for(int i=0; i<8; i++){
		fib[i] = fib[i-1] + fib[i-2];
		printf("%d", fib[i]);
	}
	return 0;
}
