#include <stdio.h>
//void change_array(int ptr[3]);
void change_array(int* ptr);  // �̷��� �ϸ� ���� �޸� �� 3��¥�� �迭 ���� ���� �� ����
int main(void){
    int arr[3] = {10, 20, 30};
    change_array(arr);
    for (int idx=0;idx<3;idx++){
        printf("arr[%d] = %d\n", idx, arr[idx]);
    }
    printf("%p\n", arr); 
}
void change_array(int* ptr){
    ptr[1] = 99;
}