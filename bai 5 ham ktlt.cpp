#include <stdio.h>
double tinhgiaithua(int n){
    double gt = 1;
    for(int i = n; i > 1; i-=2){
        gt=gt*i;
    }
    return gt;
}
int main() {
    int n;
    printf("Nhập số n: ");scanf("%d",&n);
    printf("Giai thừa cách của %d là: %.0lf\n",n,tinhgiaithua(n));
    return 0;
}