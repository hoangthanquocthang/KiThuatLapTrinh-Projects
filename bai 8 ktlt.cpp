#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int laSoNguyenTo = 1;
	printf("Nhap so nguyen to n: "); scanf("%d",&n);
	if ( n<2){
		laSoNguyenTo = false;
	}else{
		laSoNguyenTo = true;
	for ( int i = 2; i<= sqrt(n); i++){
		if (n % i == 0) {
			laSoNguyenTo = false;
				break;
			}
		}
	}
	if (laSoNguyenTo){
		printf("%d la so nguyen to.",n);
	}else{
		printf("%d khong phai la so nguyen to.",n);
	}
	return 0;
}
