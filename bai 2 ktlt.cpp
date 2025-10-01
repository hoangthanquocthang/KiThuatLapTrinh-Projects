#include <stdio.h>
#include <conio.h>
int main() {
    int chi_so_cu, chi_so_moi, so_kw_tieu_thu;
    float tien_dien = 0;
    printf("Nhap chi so dien cu: ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so dien moi: ");
    scanf("%d", &chi_so_moi);
    so_kw_tieu_thu = chi_so_moi - chi_so_cu;
    if (so_kw_tieu_thu <= 100) {
        tien_dien = so_kw_tieu_thu * 1.418;
    } else 
		if (so_kw_tieu_thu <= 150) {
        tien_dien = 100 * 1.418 + (so_kw_tieu_thu - 100) * 1.622;
    } else 
		if (so_kw_tieu_thu <= 200) {
        tien_dien = 100 * 1.418 + 50 * 1.622 + (so_kw_tieu_thu - 150) * 2.044;
    } else 
		if (so_kw_tieu_thu <= 300) {
        tien_dien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + (so_kw_tieu_thu - 200) * 2.210;
    } else 
		if (so_kw_tieu_thu <= 400) {
        tien_dien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + 100 * 2.210 + (so_kw_tieu_thu - 300) * 2.361;
    } else {
        tien_dien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + 100 * 2.210 + 100 * 2.361 + (so_kw_tieu_thu - 400) * 2.420;
    }
    printf("So kWh tieu thu: %d\n", so_kw_tieu_thu);
    printf("So tien dien phai tra: %.2f VND\n", tien_dien);
    return 0;
}
