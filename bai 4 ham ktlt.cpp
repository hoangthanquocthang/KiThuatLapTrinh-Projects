#include <stdio.h>
double tinhtien(double *tiengui, int sothang, double laisuat){
    for(int i=0;i<sothang;i++){
        *tiengui = *tiengui + (*tiengui) * laisuat/100;
    }
    return *tiengui;
}
int main() {
    double tiengui = 0.0;
    int sothang;
    double laisuat;
    printf("Nhập tiền gửi: ");scanf("%lf",&tiengui);
    printf("Nhập số tháng gửi: ");scanf("%d",&sothang);
    printf("Nhập lãi suất: ");scanf("%lf",&laisuat);
    double ketqua = tinhtien(&tiengui, sothang, laisuat);
    printf("Số tiền nhận được sau %d tháng gửi tiết kiệm với lãi suất %.2lf là: %.2lf\n",sothang,laisuat,ketqua);
}