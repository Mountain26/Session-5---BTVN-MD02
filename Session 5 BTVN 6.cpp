#include <stdio.h>

int main() {
    int choose;
    double a, b;

	do {
		printf("CALCULATOR\n");
    	printf("1. Tong 2 so\n");
    	printf("2. Hieu 2 so\n");
    	printf("3. Tich 2 so\n");
    	printf("4. Thuong 2 so\n");
    	printf("5. Thoat\n");
    	printf("Lua chon chuong trinh ban muon: ");
    	scanf("%d", &choose);
    	
    	switch(choose){
    		case 1:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Tong cua 2 so %lf va %lf la: %lf\n", a, b, a + b);
				break;
			case 2:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Hieu cua 2 so %lf va %lf la: %lf\n", a, b, a - b);
				break;
			case 3:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Tich cua 2 so %lf va %lf la: %lf\n", a, b, a * b);
				break;
			case 4:
				printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				if(b != 0){
					printf("Thuong cua 2 so %lf va %lf la: %lf\n", a, b, a / b);
				}else{
					printf("Phep tinh khong hop le\n");
				}
				break;
			case 5:
				printf("Thoat khoi chuong trinh!!\n");
				break;
			default:
				printf("Chuong trinh khong hop le\n");
				
		}
}  while ( choose != 5);
	return 0;
}
    
