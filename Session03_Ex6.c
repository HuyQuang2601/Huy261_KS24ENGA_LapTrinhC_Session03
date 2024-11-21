#include<stdio.h>
int main(){
	int side,high;
	printf("Nhap canh day cua tam giac: ");
	scanf("%d",&side);
	printf("Nhap chieu cao cua tam giac: ");
	scanf("%d", &high);
	int dientich = (side*high)/2;
	printf("Dien tich cua tam giac la: %d\n", dientich);
	
	return 0;
}
