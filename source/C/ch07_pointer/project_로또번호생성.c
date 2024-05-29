#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// �������� ���� ���α׷�
int* make_lotto();
void sort(int* arr, int cnt);   // pointer�� �Ű������� �޾ұ� ������ �迭�� ������ �� ���� cnt�� �־��� 
int main (void){
    int* lotto = make_lotto();
    sort(lotto, 6);
    printf("������ �ζǹ�ȣ : ");
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
