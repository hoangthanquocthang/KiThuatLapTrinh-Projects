#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
	float tienGui,tienNhan,laiSuat;
	printf("Nhap so tien gui: ");
	scanf("%f",&tienGui);
	printf("Nhap so lai suat: ");
	scanf("%f",&laiSuat);
	printf("Nhap tien nhan: ");
	scanf("%f",&tienNhan);
	int soThang = 0;
		while (tienGui<tienNhan) {
			tienGui = tienGui + (tienGui * laiSuat)/100;
			soThang = soThang + 1;
			}
			printf("so thang gui: %d",soThang);
			return 0;
}
