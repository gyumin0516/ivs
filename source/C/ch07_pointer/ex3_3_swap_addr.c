#include <stdio.h>
void swap_addr(int* a, int* b); // call by reference �Լ�
int main(void){
    int a = 10, b = 20;
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    swap_addr(&a,&b);
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}
// �ּҰ� ����Ű�� ���� �ٲ���� ��������� ���� �ٲ�, �ּҴ� �ȹٲ�
void swap_addr(int* a, int* b){
    printf("�Լ� �ȿ����� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("�Լ� �ȿ����� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", a, *a, b, *b);
}
