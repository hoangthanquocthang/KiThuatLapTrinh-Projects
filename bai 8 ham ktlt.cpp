#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define gioihankytu 100
int isStrongPassword(char *pw){
    if(strlen(pw) < 8){
        return 0;
    }
    int chuhoa = 0;
    int chuthuong = 0;
    int chuso = 0;
    for(int i = 0; pw[i] != '\0'; i++){
        char c = pw[i];
        if(c == '\n'){
            continue;;
        }
        if (isupper(c)){
            chuhoa = 1;
        }else if (islower(c)){
            chuthuong = 1 ;
        }else if(isdigit(c)){
            chuso = 1;
        }
        if(chuhoa && chuthuong && chuso){
            break;;
        }
    }
    if(chuhoa && chuthuong && chuso){
        return 1;
    }else{
        return 0;
    }
}
int main() {
    char password[gioihankytu + 2];
    printf("Nhập mật khẩu của bạn: ");
    scanf("%s",&password);
    password[strcspn(password, "\n")] = 0;
    if(isStrongPassword(password)){
        printf("Mật khẩu của bạn MẠNH!\n");
    }else{
        printf("Mat khau cua ban YEU!\n");
        printf("Vui long dam bao mat khau co:\n");
        printf("  - It nhat 8 ky tu\n");
        printf("  - It nhat 1 chu hoa\n");
        printf("  - It nhat 1 chu thuong\n");
        printf("  - It nhat 1 chu so\n");
    }
    return 0;
}