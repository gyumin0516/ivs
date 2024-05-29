#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 오름차순 정렬 프로그램
int* make_lotto();
void sort(int* arr, int cnt);   // pointer로 매개변수를 받았기 때문에 배열의 개수를 모름 따라서 cnt도 넣어줌 
int main (void){
    int* lotto = make_lotto();
    sort(lotto, 6);
    printf("생성된 로또번호 : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t", lotto[idx]);
    }
}
int* make_lotto(){
    srand((unsigned int)time(NULL)); 
    static int lotto[6];
    int idx = 0;
    while(idx<6){
        int temp = rand()%45+1;
        int duplication_check = 1;
        for (int i=0;i<idx;i++){
            if (lotto[i]==temp){
                duplication_check = 0;
            }
        }
        if (duplication_check){
            lotto[idx] = temp;
            idx++;
        }else{
            continue;
        }
    }
    return lotto;
}
void sort(int* arr, int cnt){
    for (int i=0;i<cnt-1;i++){
        for (int j=i;j<cnt;j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
