#include <stdio.h>
#include <string.h>
int main(void){
    int i = 10;
    int j = i;  // i값 바껴도 j안바뀜
    i = 99;
    printf("i=%d\tj=%d\n", i, j);
    char* str1 = "Hello";
    //char* str2 = str1;  // str1의 주소를 str2에 할당(얕은 복사)
    char* str2;
    strcpy(str2, str1); // str1의 문자열을 str2에 깊은 복사(주소는 달라짐)
    str1 = "Hi";   // 문자열 할당 시 새로운 주소 만들어서 할당함
    printf("str1 = %s\t str2=%s\n", str1, str2);

}