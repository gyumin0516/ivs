#include <stdio.h>
// �Լ��� return���� �迭�� ���� ���� ���� �����͸� return �ؾ���
int* return_array(int* ptr);  
int main(void){
    int arr[3] = {10, 20, 30};
    int* after_arr = return_array(arr);
    printf("������ : ");
    for (int idx=0;idx<3;idx++){   
        printf("arr[%d] = %d\t", idx, arr[idx]);
    }
    printf("\n������ : ");
    for (int idx=0;idx<3;idx++){
        printf("after_arr[%d] = %d\t", idx, after_arr[idx]);
    }
    printf("\n%p\n", arr); 
    printf("%p\n", after_arr); 
}
int* return_array(int* ptr){
    static int result_arr[3];  //static�� �Ⱦ��� �Լ��� ������ result_arr�� �޸𸮿��� �����
    for(int idx=0;idx<3;idx++){
        result_arr[idx] = ptr[idx];
    }
    result_arr[1] = 99;    
    return result_arr;
}