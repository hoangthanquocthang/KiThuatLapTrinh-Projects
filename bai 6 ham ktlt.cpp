#include <stdio.h>
int sothangcan(double tiengui,double tiencan,double laisuat){
    int sothang=0;
    while(tiengui<tiencan){
        tiengui = tiengui + tiengui*laisuat/100;
        sothang++;
    }
    return sothang;
}
int main() {
    double tiengui,tiencan,laisuat;
    printf("Nhập số tiền gửi: ");scanf("%lf",&tiengui);
    printf("Nhập số tiền cần: ");scanf("%lf",&tiencan);
    printf("Nhập lãi suất: ");scanf("%lf",&laisuat);
    int ketqua=sothangcan(tiengui, tiencan, laisuat);
    printf("Để nhận được số tiền %.0lf từ %.0lf ban đầu với lãi suất %.2lf thì cần ít nhất %d tháng\n",tiencan,tiengui,laisuat,ketqua);
    return 0;
}