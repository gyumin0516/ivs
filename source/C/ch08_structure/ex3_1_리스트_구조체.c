#include <stdio.h>
struct list{
    int num; 
    struct list* next;
};
int main(void){
    struct list a = {10,0}, b={20,0}, c={30,0};  // a, b, c�� �ι�°���� �ּҸ� ����Ű�µ� �ϴ��� 0���� �ʱ�ȭ
    struct list* head = &a;  // ù��° ����ü a�� ����Ű�� ����ü ������ 
    struct list* current;    // ó���� current�� head�� �ְ� �������� �� current�� next�� ������ abc�� ������� ����
    a.next = &b;
    b.next = &c;
    current = head;
    while(current){
        printf("%d\t", current->num);  // head�� a�� ����Ű�Ƿ� a�� num�� 10 ���
        current = current->next;       // =(*current).next
    }
}