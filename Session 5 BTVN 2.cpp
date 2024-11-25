#include <stdio.h>

int main(){
	
	int a;
	printf("Moi ban nhap so nguyen (= 7) ");
	scanf("%d", &a);
	while(a!=7){
		printf("Moi ban nhap so nguyen (= 7) ");
		scanf("%d", &a); 
	}
	return 0; 
} 
