#include <stdio.h>
// 함수의 return값이 배열일 수는 없음 따라서 포인터를 return 해야함
int* return_array(int* ptr);  
int main(void){
    int arr[3] = {10, 20, 30};
    int* after_arr = return_array(arr);
    printf("수정전 : ");
    for (int idx=0;idx<3;idx++){   
        printf("arr[%d] = %d\t", idx, arr[idx]);
    }
    printf("\n수정후 : ");
    for (int idx=0;idx<3;idx++){
        printf("after_arr[%d] = %d\t", idx, after_arr[idx]);
    }
    printf("\n%p\n", arr); 
    printf("%p\n", after_arr); 
}
int* return_array(int* ptr){
    static int result_arr[3];  //static을 안쓰면 함수가 끝나고 result_arr이 메모리에서 사라짐
    for(int idx=0;idx<3;idx++){
        result_arr[idx] = ptr[idx];
    }
    result_arr[1] = 99;    
    return result_arr;
}