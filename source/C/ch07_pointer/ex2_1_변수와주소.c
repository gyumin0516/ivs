#include <stdio.h>
// ���ڿ� str�� ���ڿ��� �ּҸ� ����Ű�� str�� ����Ű�� �ּҵ� ���� �ִ�. 
int main(void){
    int a = 1;
    int b = 2; 
    char* str = "Hello";
    printf("a���� �ּ�:%p, ������:%d\n", &a, a);
    printf("b���� �ּ�:%p, ������:%d\n", &b, b);
    printf("str�� �ּ�:%p, ���ڿ� �ּ�:%p, ���ڿ� ����:%s", &str, str, str);
    a=10; b=20; str="Hi";
// str ���� ���ϰ� str�� �ּҴ� �Ⱥ���
    printf("\n=========���� ���� ��=========\n");
    printf("a���� �ּ�:%p, ������:%d\n", &a, a);
    printf("b���� �ּ�:%p, ������:%d\n", &b, b);
    printf("str�� �ּ�:%p, ���ڿ� �ּ�:%p, ���ڿ� ����:%s", &str, str, str);
}