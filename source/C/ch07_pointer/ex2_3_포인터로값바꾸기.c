#include <stdio.h>
int main(void){
    int a = 1;
    int b = 2; 
    int* pointer = &a;  
    *pointer *= 3;  // a*=3 �Ѱſ� ����.
    pointer = &b;
    *pointer *= 3;
    printf("a���� :%d\n",a);
    printf("b���� :%d\n",b);
    printf("pointer������ ����Ű�� �ּ� : %p, ��:%d\n", pointer, *pointer);
    printf("a���� �ּ� : %p\n", &a);
    printf("b���� �ּ� : %p\n", &b);
}