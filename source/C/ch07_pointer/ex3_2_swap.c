#include <stdio.h>
void swap(int a, int b); // call by value �Լ�
int main(void){
    int a = 10, b = 20;
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    swap(a,b);
    printf("swap() ȣ�� �� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}
// �Լ����� ������ ���� �޾ƿͼ� ���� ���� ���ο� �ּҸ� �ο��ϰ� �̿� ���� ������ ������ 
void swap(int a, int b){
    printf("�Լ� �ȿ����� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("�Լ� �ȿ����� a�ּ�=%p, a��=%d, b�ּ�=%p, b=%d\n", &a, a, &b, b);
}
