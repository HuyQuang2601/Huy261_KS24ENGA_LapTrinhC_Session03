#include<stdio.h>
int main(){
	float Ctemp;
	printf("Nhap vao nhiet do theo do Celsius: ");
	scanf("%f", &Ctemp);
	float Ftemp = Ctemp*1.8+32;
	printf("Do Fahrenheit tuong ung: %f\n", Ftemp);
	return 0;
}
