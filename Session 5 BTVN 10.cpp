#include <stdio.h>

int main() {
    int num;
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &num);
    if (num<0){
    	num=-num; 
	} 
    while (num > 0) {
        int tungSo = num % 10;
        printf("%d ", tungSo);
        num = num / 10;
    }
    return 0;
}

