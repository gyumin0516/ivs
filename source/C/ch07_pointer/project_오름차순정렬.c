#include <stdio.h>
// �������� ���� ���α׷�
void sort(int* arr, int cnt);   // pointer�� �Ű������� �޾ұ� ������ �迭�� ������ �� ���� cnt�� �־��� 
void swap(int* a, int* b);
int main (void){
    int lotto[] = {41, 1, 35, 20, 45, 10};
    printf("������ : ");
    for(int idx=0;idx<6;idx++){
        printf("%d\t", lotto[idx]);
    }
    sort(lotto, sizeof(lotto)/sizeof(int));  // �迭�� ũ�� ���ϴ� ��
    printf("\n������ : ");
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