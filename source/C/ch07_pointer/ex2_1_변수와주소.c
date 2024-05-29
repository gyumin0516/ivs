#include <stdio.h>
// 문자열 str은 문자열의 주소를 가르키고 str을 가르키는 주소도 따로 있다. 
int main(void){
    int a = 1;
    int b = 2; 
    char* str = "Hello";
    printf("a변수 주소:%p, 변수값:%d\n", &a, a);
    printf("b변수 주소:%p, 변수값:%d\n", &b, b);
    printf("str의 주소:%p, 문자열 주소:%p, 문자열 내용:%s", &str, str, str);
    a=10; b=20; str="Hi";
// str 값은 변하고 str의 주소는 안변함
    printf("\n=========변수 수정 후=========\n");
    printf("a변수 주소:%p, 변수값:%d\n", &a, a);
    printf("b변수 주소:%p, 변수값:%d\n", &b, b);
    printf("str의 주소:%p, 문자열 주소:%p, 문자열 내용:%s", &str, str, str);
}