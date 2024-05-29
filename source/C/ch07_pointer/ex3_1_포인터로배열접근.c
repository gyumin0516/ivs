#include <stdio.h>
// 포인터로 배열을 받으면 배열과 똑같이 사용가능
int main(void){
    int arr[3] = { 10, 20, 30};
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;
    for(int idx=0 ; idx<3 ; idx++){
        printf("포인터변수 ptr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99; ptr[1] = 88; ptr[2] = 77;
    printf("=== 수정후 === \n");
    for(int idx=0 ; idx<3 ; idx++){
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
        printf("배열 arr[%d] = %d\n", idx, *(arr+idx));  //*(arr+2)는 arr[2]와 같다
    }
    for(int idx=0 ; idx<3 ; idx++){
        printf("포인터변수 ptr[%d] = %d\n", idx, ptr[idx]);
        printf("포인터변수 ptr[%d] = %d\n", idx, *(ptr+idx));
    }
    printf(arr);
}