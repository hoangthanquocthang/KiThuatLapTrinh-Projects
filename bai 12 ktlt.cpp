#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while (n--) {
        int N,M,K;
        scanf("%d %d %d",&M,&N,&K);
        int loai1 = 162;
        int loai2 = 18;
        int loai3 = 720;
        
        if(N <= loai1 && M <= loai2 && K <= loai3){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
/*Phân tích và tính tổng số lượng số điện thoại Loại 3
Định nghĩa: Số điện thoại Loại 3 là số có sáu chữ số cuối cùng tạo thành một số thuận nghịch.
Số thuận nghịch có 6 chữ số: Một số có dạng abcdef là thuận nghịch nếu a=f, b=e, c=d. Ví dụ: 123321.
Số lượng:
Chữ số a (hàng trăm nghìn): Có 9 cách chọn (từ 1 đến 9), vì nếu a=0 thì số đó chỉ có 5 chữ số.
Chữ số b: Có 10 cách chọn (từ 0 đến 9).
Chữ số c: Có 10 cách chọn (từ 0 đến 9).
Chữ số d, e, f được xác định bởi c, b, a.
Tổng số lượng số Loại 3: 9 * 10 * 10 = 900 số.
Tổng số lượng Loại 3: 900
Phân tích và tính tổng số lượng số điện thoại Loại 2
Định nghĩa: Số Loại 2 là số Loại 3 có tổng sáu chữ số cuối cùng chia hết cho 10.
Tính tổng: Tổng sáu chữ số của một số thuận nghịch abcde là: S = a+b+c+d+e+f = 2*(a+b+c).
Điều kiện: S chia hết cho 10. Điều này có nghĩa là 2*(a+b+c) phải chia hết cho 10, hay a+b+c phải chia hết cho 5.
Số lượng:
a có 9 cách chọn.
b có 10 cách chọn.
c có 10 cách chọn.
Tổng a+b+c phải chia hết cho 5. Với mỗi cặp (a,b) có 9 * 10 = 90 cặp. Với mỗi cặp (a,b), tổng (a+b) khi chia cho 5 sẽ có một số dư.
Có đúng 2 giá trị của c (từ 0 đến 9) để tổng a+b+c chia hết cho 5. Ví dụ, nếu (a+b) % 5 == 1, thì c phải là 4 hoặc 9.
Tổng số lượng số Loại 2: 9 * 10 * 2 = 180 số.
Tổng số lượng Loại 2: 180
Phân tích và tính tổng số lượng số điện thoại Loại 1
Định nghĩa: Số Loại 1 là số Loại 2 có tổng sáu chữ số cuối cùng không chứa số 0 nào.
Điều kiện: Các chữ số a,b,c,d,e,f đều phải khác 0.
Số lượng:
a có 9 cách chọn (1-9).
b có 9 cách chọn (1-9).
c có 9 cách chọn (1-9).
Tổng a+b+c phải chia hết cho 5.
Tương tự như Loại 2, với mỗi cặp (a,b) (đều khác 0), có đúng 2 giá trị của c (từ 1 đến 9) để a+b+c chia hết cho 5.
Tổng số lượng số Loại 1: 9 * 9 * 2 = 162 số.
Tổng số lượng Loại 1: 162
*/

