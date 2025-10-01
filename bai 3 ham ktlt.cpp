#include <stdio.h>
int tinhsodien(int soluong, int tiendien){
    if (soluong <= 100) {
        tiendien = soluong * 1418;
    }else if (soluong <= 150){
        tiendien = 100 * 1418 + (soluong - 100) * 1622;
    }else if (soluong <= 200){
        tiendien = 100 * 1418 + 50 * 1622 + (soluong - 150) * 2044;
    }else if (soluong <= 300){
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soluong - 200) * 2210;
    }else if (soluong <= 400){
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soluong - 300) * 2361;
    }else{
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soluong - 400) * 2420;
    }
    return tiendien;
}
int main() {
    int chisodiencu;
    int chisodienmoi;
    printf("Chỉ số điện cũ: "); scanf("%d",&chisodiencu);
    printf("CHỉ số điện mới: "); scanf("%d",&chisodienmoi);
    int soluong = chisodienmoi - chisodiencu;
    int tiendien=0;
    printf("Tiền điện %d\n",tinhsodien(soluong, tiendien));
    return 0;
}