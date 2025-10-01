#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	char hoTen[100];
	float diemToan, diemVan, diemTin, dtb;
	printf ("Nhap ho ten hoc sinh: "); 
	fgets(hoTen, sizeof (hoTen), stdin);
	hoTen[strcspn(hoTen, "\n")] = 0;
	printf("Nhap diem Toan, Van, Tin: ");
	scanf("%f %f %f",&diemToan, &diemVan, &diemTin);
	dtb = (diemToan + diemVan + diemTin)/3.0;
	
	printf("\n---Ket qua hoc tap---\n");
	printf("ho ten Hoc sinh: %s\n",hoTen);
	printf("diem trung binh: %.2f\n",dtb);
	
	printf("xep loai DTB: ");
	if (dtb < 5){
		printf(" Yeu \n");
	}else{
		if (dtb<=5 && dtb<7){
			printf("Trung Binh \n");
		}else{
			if (dtb<=7 && dtb<8){
				printf("Kha \n");
			}else{
				if (dtb>=8){
					printf("Gioi \n");
				}
			}
		}
	}
	return 0;
}
