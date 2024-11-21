#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem van: ");
	scanf("%f", &van);
	printf("Nhap diem anh: ");
	scanf("%f", &anh);
	float sum = toan+van+anh;
	float avgMark = sum/3;
	printf("Tong diem 3 mon la: %.2f\n", sum);
	printf("Trung binh diem 3 mon la: %.2f\n",avgMark);
	
	return 0;
}
