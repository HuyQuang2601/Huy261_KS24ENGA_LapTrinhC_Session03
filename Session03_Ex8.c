#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &number);
	int thousand = number/1000;
	int hundred = (number%1000)/100;
	int tens = ((number%1000)%100)/10;
	int unit = ((number%1000)%100)%10;
	printf("So nghich dao cua so da nhap la: %d%d%d%d", unit,tens,hundred,thousand);
	
	return 0;
}
