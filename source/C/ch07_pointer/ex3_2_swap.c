#include <stdio.h>
void swap(int a, int b); // call by value 함수
int main(void){
    int a = 10, b = 20;
    printf("swap() 호출 전 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
    swap(a,b);
    printf("swap() 호출 후 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
}
// 함수에선 변수의 값만 받아와서 값에 대한 새로운 주소를 부여하고 이에 대해 연산을 수행함 
void swap(int a, int b){
    printf("함수 안에서의 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("함수 안에서의 a주소=%p, a값=%d, b주소=%p, b=%d\n", &a, a, &b, b);
}
