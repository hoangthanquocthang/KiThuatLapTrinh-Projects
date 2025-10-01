#include <stdio.h>

int main() {
    char tenMatHang[50];
    float trongLuong;
    float donGia;
    char maChatLuong;
    int soLuong;
    
    printf("Nhap ten mat hang: ");
    scanf("%s", tenMatHang); 

    printf("Nhap trong luong (kg): ");
    scanf("%f", &trongLuong);

    printf("Nhap don gia (VND): ");
    scanf("%f", &donGia);

    printf("Nhap ma chat luong : ");
    scanf(" %c", &maChatLuong); 

    printf("Nhap so luong: ");
    scanf("%d", &soLuong);
    printf("\n--- Thong tin mat hang da nhap ---\n");
    printf("Ten mat hang: %s\n", tenMatHang);
    printf("Trong luong: %.2f kg\n", trongLuong);
    printf("Don gia: %.2f VND\n", donGia);
    printf("Ma chat luong: %c\n", maChatLuong);
    printf("So luong: %d\n", soLuong);

    return 0;
}
