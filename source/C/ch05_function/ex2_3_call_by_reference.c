#include <stdio.h>
// Call by value vs. reference
// void�� return�� ���� 
void sum(int from, int to, int* tot); // from�� int���� �ִ�, tot�� ����Ű�� �ּҰ��� ���� int���� �ִ�.
int main(void){
    int a=1, b=10; int* tot;  // tot�� �ּҰ��� ����Ű�� ���� int �� �����
    sum(a, b, &tot);
    printf("%d���� %d������ �������� %d\n", a, b, tot);
    a = 10; b = 100;
    sum(a, b, &tot);
    printf("%d���� %d������ �������� %d\n", a, b, tot);
}
void sum(int from, int to, int* tot){
    *tot = 0;
    for (int i=from; i<=to; i++){
        *tot += i;
    }
}
