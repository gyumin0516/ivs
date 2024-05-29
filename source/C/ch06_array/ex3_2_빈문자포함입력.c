#include <stdio.h>
// 이름(빈문자불포함), 주소(빈문자포함)를 입력받기
/* scanf("%s", 변수, 입력받을byte수)
     white space(탭,스페이스,엔터)가 오면 그 이전의 버퍼내용을 return
     단 처음 나오는 white space는 무시
   gets(변수)
     '\n'이전까지만 인식하고 그 뒤는 버퍼에서 지움
*/
int main (void){
    // char* name -> 이렇게 쓸 시 입력받을문자열이 저장될 공간이 확보되지 않음
    char name[128];
    char address[512];
    printf("이름은 >>");
    scanf("%s", name, sizeof(name));
    printf("주소는 >>");
    // scanf("%s", address, sizeof(address));
    // scanf를 앞에서 써서 현재 버퍼에 \n 남아있는 상태
    // 그 상태에서 gets를 쓰면 \n이전인 빈스트링만 받게됨
    gets(address); // 빈스트링을 받아서 버퍼를 비우는 용도
    gets(address);
    printf("입력한 이름 : %s\n", name);
    printf("입력한 주소 : %s\n", address); 
}