#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &number);
	int thousand = number/1000;
	int hundred = (number%1000)/100;
	int tens = ((number%1000)%100)/10;
	int unit = ((number%1000)%100)%10;
	int sum = thousand + hundred + tens + unit;
	printf("Tong cua cac chu so la: %d", sum);
	
	return 0;
}
