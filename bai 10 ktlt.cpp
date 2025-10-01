#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	float tienCanCo,laiSuat;
	int soThang;
	printf("Nhap so tien can co: ");
	scanf("%f",&tienCanCo);
	printf("Nhap so lai suat: ");
	scanf("%f",&laiSuat);
	printf("Nhap so thang: ");
	scanf("%d",&soThang);
	for (int i = 1; i <= soThang; i++) {
        tienCanCo = sqrt(tienCanCo *(1 + laiSuat));
    }
		printf("so tien can co: %f",tienCanCo);
		return 0;
}
