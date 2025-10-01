#include <stdio.h>

int main() {
    float tienGui, laiSuat;
    int soThang;
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tienGui);
    printf("Nhap lai suat 1 thang: ");
    scanf("%f", &laiSuat);
    printf("Nhap so thang gui: ");
    scanf("%d", &soThang);
    for (int i = 1; i <= soThang; i++) {
        tienGui = tienGui + tienGui * laiSuat / 100;
    }
    printf("So tien co duoc sau %d thang la: %.2f\n", soThang, tienGui);
    return 0;
}
