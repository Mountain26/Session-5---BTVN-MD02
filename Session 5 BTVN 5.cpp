#include <stdio.h>

int main(){
	
	int a, b, c = 0; 
	for (b=1; b<10;b++){
	for (a=0;a<=10;a++){
		c = a * b; 
		printf("%d x %d = %d \n", a, b, c);
	}
	}

}
