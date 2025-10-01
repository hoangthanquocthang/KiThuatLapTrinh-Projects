#include <stdio.h>
#include <string.h>
#define Max 100
void daonguocchuoi(char *str){
    if(str == NULL || *str == '\0'){
        return;
    }
    int dodai = strlen(str);
    int batdau = 0;
    int ketthuc = dodai - 1;
    while(batdau < ketthuc){
        char temp = str[batdau];
        str[batdau] = str[ketthuc];
        str[ketthuc] = temp;
        batdau++;
        ketthuc--;
    }
}
int main() {
    char str[Max + 2];
    printf("Nhập chuỗi: ");
    scanf("%s",&str);
    str[strcspn(str, "\n")] = 0;
    printf("Chuỗi ban đầu: '%s'\n",str);
    daonguocchuoi(str);
    printf("Chuỗi sau khi bị đảo ngược: '%s'\n",str);
    return 0;
}

