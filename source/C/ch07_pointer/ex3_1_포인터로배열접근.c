#include <stdio.h>
// �����ͷ� �迭�� ������ �迭�� �Ȱ��� ��밡��
int main(void){
    int arr[3] = { 10, 20, 30};
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;
    for(int idx=0 ; idx<3 ; idx++){
        printf("�����ͺ��� ptr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99; ptr[1] = 88; ptr[2] = 77;
    printf("=== ������ === \n");
    for(int idx=0 ; idx<3 ; idx++){
        printf("�迭 arr[%d] = %d\n", idx, arr[idx]);
        printf("�迭 arr[%d] = %d\n", idx, *(arr+idx));  //*(arr+2)�� arr[2]�� ����
    }
    for(int idx=0 ; idx<3 ; idx++){
        printf("�����ͺ��� ptr[%d] = %d\n", idx, ptr[idx]);
        printf("�����ͺ��� ptr[%d] = %d\n", idx, *(ptr+idx));
    }
    printf(arr);
}