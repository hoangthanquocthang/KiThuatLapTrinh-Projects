#include <stdio.h>
#include <math.h>
int kiemtratamgiac(float a, float b, float c){
    if(a + b > c && a + c > b && b + c > a){
        return 1;
    }
    return 0;
}

void phanloaitamgiac(float a,float b,float c){
    if(a == b && b == c){
        printf("Tam giác đều\n");
        return;
    }
    int vuong = (fabs(a*a + b*b - c*c) < 1e-6 ||
                 fabs(a*a + c*c - b*b) < 1e-6 ||
                 fabs(b*b + c*c - a*a) < 1e-6);
    int can = (a == b || a == c || b == c);
    if(vuong && can){
        printf("Tam giác vuông cân\n");
    }else if(vuong){
        printf("Tam giác vuông\n");
    }else if(can){
        printf("Tam giác cân\n");
    }else{
        printf("Tam giác thường\n");
    }
}
double dientich(float a,float b,float c){
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    float a,b,c;
    printf("Nhập độ dài cạnh a: ");scanf("%f",&a);
    printf("Nhập độ dài cạnh b: ");scanf("%f",&b);
    printf("Nhập độ dài cạnh c: ");scanf("%f",&c);
    if(kiemtratamgiac(a, b, c) == 1){
        printf("3 số thực %.2f, %.2f, %.2f tạo thành 1 tam giác\n",a,b,c);
        phanloaitamgiac(a, b, c);
        printf("Diện tích của tam giác là: %.2lf\n",dientich(a, b, c));
    }else{
        printf("3 số thực %f, %f, %f không tạo thành 1 tam giác\n",a,b,c);
    }
    return 0;
}