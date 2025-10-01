#include <stdio.h>

int main() {
    int soBoTest;
    printf("Nhap so bo test: ");
    scanf("%d", &soBoTest);
    while (soBoTest--) {
        int giaSanPham, soTienTra;
        scanf("%d %d", &giaSanPham, &soTienTra);
        int soTienThua = soTienTra - giaSanPham;
        int soTo10Dollar, soTo5Dollar, soTo1Dollar;
        soTo10Dollar = soTienThua / 10;
        int soTienConLai = soTienThua % 10;
        if (soTienConLai >= 5) {
            soTo5Dollar = 1;
            soTienConLai -= 5;
        } else {
            soTo5Dollar = 0;
        }
        soTo1Dollar = soTienConLai;
        printf("%d = %d * 10 + %d * 5 + %d * 1\n", 
               soTienTra - giaSanPham, 
               soTo10Dollar, 
               soTo5Dollar, 
               soTo1Dollar1,
			   );
    }

    return 0;
}

