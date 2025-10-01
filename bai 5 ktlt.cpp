#include <stdio.h>

int main(){
	float thangDiem10;
	float thangDiem4;
	char thangDiemChu[3];
	printf("Nhap diem cua mot hoc sinh theo thang diem 10: ");
	scanf("%f",&thangDiem10);
	
	if (thangDiem10 >=9){
		thangDiem4=4.0;
		snprintf(thangDiemChu, sizeof(thangDiemChu),"A+");
	}else
		if (thangDiem10 <=8 && thangDiem10 <9){
		thangDiem4=3.5;
		snprintf( thangDiemChu, sizeof(thangDiemChu),"A");
	}else
		if (thangDiem10 <=7 && thangDiem10 <8){
		thangDiem4=3.0;
		snprintf(thangDiemChu,sizeof(thangDiemChu),"B+");
	}else
		if (thangDiem10 <=6 && thangDiem10 <7){
		thangDiem4=2.5;
		snprintf(thangDiemChu,sizeof(thangDiemChu),"B");
	}else
		if (thangDiem10 <=5 && thangDiem10 <6){
		thangDiem4=2.0;
		snprintf(thangDiemChu,sizeof(thangDiemChu),"C");
	}else
		if (thangDiem10 <=4 && thangDiem10 <5){
		thangDiem4=1.5;
		snprintf(thangDiemChu,sizeof(thangDiemChu),"D");
	}else
		if (thangDiem10 <4){
		thangDiem4=1.0;
		snprintf( thangDiemChu,sizeof(thangDiemChu),"F");
	}
	printf("\n---Ket qua hoc tap---\n");
	printf("thang diem 10: %.2f\n",thangDiem10);
	printf("thang diem 4: %.2f\n",thangDiem4);
	printf("thang diem chu: %s\n",thangDiemChu);
	return 0;
}
