#include <stdio.h>
struct list{
    int num; 
    struct list* next;
};
int main(void){
    struct list a = {10,0}, b={20,0}, c={30,0};  // a, b, c의 두번째항은 주소를 가르키는데 일단은 0으로 초기화
    struct list* head = &a;  // 첫번째 구조체 a를 가르키는 구조체 포인터 
    struct list* current;    // 처음에 current에 head를 넣고 다음부턴 그 current의 next를 넣으면 abc가 순서대로 나옴
    a.next = &b;
    b.next = &c;
    current = head;
    while(current){
        printf("%d\t", current->num);  // head가 a를 가르키므로 a의 num인 10 출력
        current = current->next;       // =(*current).next
    }
}