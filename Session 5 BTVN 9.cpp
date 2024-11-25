#include <stdio.h>

int main() {
    int choose;
    double a, b, c; 

	do {
		printf("MENU\n");
    	printf("1. Nhap 3 so\n");
    	printf("2. Tong 3 so\n");
    	printf("3. Trung binh cong 3 so\n");
    	printf("4. So nho nhat\n");
    	printf("5. So lon nhat\n");
    	printf("6. Thoat\n");
    	printf("Lua chon chuong trinh ban muon: ");
    	scanf("%d", &choose);
    	
    switch(choose){
    		case 1:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Nhap so thu ba: \n");
				scanf("%lf", &c);
				break;
			case 2:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Nhap so thu ba: \n");
				scanf("%lf", &c);
				printf("Tong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, a + b + c);
				break;
			case 3:
    			printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Nhap so thu ba: \n");
				scanf("%lf", &c);
				printf("Trung binh cong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, (a + b + c)/3 );
				break;
			case 4:
				printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Nhap so thu ba: \n");
				scanf("%lf", &c);
				if(a<b && a<c){
					printf("So nho nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, a );
				}else if(b<a && b<c){
					printf("So nho nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, b );
				}else if(c<a && c<b){
					printf("So nho nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, c );
			}	
				break;
			case 5:
				 printf("Nhap so thu nhat: \n");
				scanf("%lf", &a); 
				printf("Nhap so thu hai: \n");
				scanf("%lf", &b);
				printf("Nhap so thu ba: \n");
				scanf("%lf", &c);
				if(a>b && a>c){
					printf("So lon nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, a );
				}else if(b>a && b>c){
					printf("So nho nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, b );
				}else if(c>a && c>b){
					printf("So lon nhat trong 3 so %lf, %lf va %lf la: %lf\n", a, b, c, c );
			}	
			case 6:
				printf("Thoat khoi chuong trinh!!\n");
				break;
			default:
				printf("Chuong trinh khong hop le\n");
			}
}  while ( choose != 6);
	return 0;
}
