#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// �������� ���� ���α׷�
int* make_lotto();
int* make_lotto2();
void sort(int* arr, int cnt);   // pointer�� �Ű������� �޾ұ� ������ �迭�� ������ �� ���� cnt�� �־��� 
int main (void){
    int lose = 1;
    int day=0;
    while(lose){
        int* lotto = make_lotto();
        sort(lotto, 6);
        int* my_lotto = make_lotto2();
        sort(my_lotto, 6);
        int tot = 1;
        for (int i=0;i<6;i++){
            if(lotto[i]!=my_lotto[i]){
                tot*=0;
            }
        }
        if (tot==1){
            lose = 0;
        }
        day++;
        printf("%d�� ��� �߽��ϴ�.\n", day*7);
        printf("�ζǹ�ȣ : ");
        for(int idx=0;idx<6;idx++){
            printf("%d\t", lotto[idx]);
        }
        printf("\n�� �ζǹ�ȣ : ");
        for(int idx=0;idx<6;idx++){
            printf("%d\t", my_lotto[idx]);
        }

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
                break;
            }
        }
        if (duplication_check){
            lotto[idx] = temp;
            idx++;
        }
    }
    return lotto;
}
int* make_lotto2(){
    srand((unsigned int)time(NULL)); 
    static int lotto[6];
    int idx = 0;
    while(idx<6){
        int temp = rand()%45+1;
        int duplication_check = 1;
        for (int i=0;i<idx;i++){
            if (lotto[i]==temp){
                duplication_check = 0;
                break;
            }
        }
        if (duplication_check){
            lotto[idx] = temp;
            idx++;
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
