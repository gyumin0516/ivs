#include <stdio.h>
// 오름차순 정렬 프로그램
void sort(int* arr, int cnt);   // pointer로 매개변수를 받았기 때문에 배열의 개수를 모름 따라서 cnt도 넣어줌 
void swap(int* a, int* b);
int main (void){
    int lotto[] = {41, 1, 35, 20, 45, 10};
    printf("정렬전 : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t", lotto[idx]);
    }
    sort(lotto, sizeof(lotto)/sizeof(int));  // 배열의 크기 구하는 법
    printf("\n정렬후 : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t", lotto[idx]);
    }

}
void sort(int* arr, int cnt){
    for (int i=0;i<cnt-1;i++){
        for (int j=i;j<cnt;j++){
            if (arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}