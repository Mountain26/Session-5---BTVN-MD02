#include <stdio.h>

int main(){
	
	int a, b, c = 0; 
	printf("Moi ban nhap so nguyen duong (1-10 ): ");
	scanf("%d", &b);
	
	while(0 < b && b > 10){
		printf("Moi ban nhap so nguyen duong (1-10 ) ");
		scanf("%d", &b); 
}
	for (a=0;a<=10;a++){
		c = a * b; 
		printf("%d x %d = %d \n", a, b, c);
	}
}
