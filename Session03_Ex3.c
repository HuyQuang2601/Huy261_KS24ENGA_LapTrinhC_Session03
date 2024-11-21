#include <stdio.h>

int main(){
	float PI = 3.14;
	float banKinh;
	printf("Nhap ban kinh hinh tron");
	scanf("%f",&banKinh);
	float dienTich = PI * banKinh * banKinh;
	float chuVi = banKinh * 2 * PI;
	printf("Dien tich hinh tron la %.2f\n", dienTich);
	printf("Chu vi hinh tron la %.2f", chuVi);
	return 0;
	
}
