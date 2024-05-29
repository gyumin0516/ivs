#include <stdio.h>
// 주소(빈문자포함), 이름(빈문자불포함)을 입력받기
int main (void){
    // 주소를 먼저 받을 시 버퍼 지울 필요 없음
    char name[128];
    char address[512];
    printf("주소는 >>");
    gets(address);
    printf("이름은 >>");
    scanf("%s", name, sizeof(name));
    printf("입력한 주소 : %s\n", address); 
    printf("입력한 이름 : %s\n", name);
}