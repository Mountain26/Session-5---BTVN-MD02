#include <stdio.h>

int main(){
	
	int a, b, c = 0; 
	printf("Moi ban nhap so nguyen duong: ");
	scanf("%d", &b);
	
	while(b<0){
		printf("Moi ban nhap so nguyen duong ");
		scanf("%d", &b); 
	for (a=0;a<=b;a++){
		c+= a; 
	}
	printf("Tong tat ca cac so tu 1 den so ban nhap la: %d", c);
}
}
