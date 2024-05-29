#include <stdio.h>
void swap_addr(int* a, int* b); // call by reference 함수
int main(void){
    int a = 10, b = 20;
    printf("swap() 호출 전 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
    swap_addr(&a,&b);
    printf("swap() 호출 후 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
}
// 주소가 가르키는 값을 바꿔줘야 결과적으로 값이 바뀜, 주소는 안바뀜
void swap_addr(int* a, int* b){
    printf("함수 안에서의 a주소=%p, a값=%d, b주소=%p, b=%d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("함수 안에서의 a주소=%p, a값=%d, b주소=%p, b=%d\n", a, *a, b, *b);
}
