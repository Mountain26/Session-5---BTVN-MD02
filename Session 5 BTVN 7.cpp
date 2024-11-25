#include <stdio.h>
	
int main() {
    int a, b, UCLN;

	printf("Moi ban nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);
   
   if(a==0 || b==0){
   		UCLN = a + b;
   }else{
   		while(a!=b){
   		if(a>b){
   			a = a - b;
		   }else{
		   	b = b - a;
		   }
		   UCLN = a;
		   }
   		}
    printf("Uoc chung lon nhat la: %d\n",UCLN);

    return 0;
}

