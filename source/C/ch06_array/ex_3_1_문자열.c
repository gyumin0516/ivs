#include <stdio.h>
// jenny�� �����ϸ� jenny\0���� �迭�� �����
int main(void){
    //char* name = "jenny";  �̷��� �ص� �Ȱ���
    char name[] = "jenny";
    for(int idx=0;idx<6;idx++){
        printf("index : %d : ���� : %c\n", idx, name[idx]);
    } 
}