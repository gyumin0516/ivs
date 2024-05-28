#include <stdio.h>
// for 문 조건을 공란으로 비워놓으면 무한 반복문
int main(void){
    int j=1;
    // for (int i=1;i<=j;j++){
    //     printf("%d",i);
    // }

    while(1){
        printf("%d", j++);
        if(j==5){
            break;
        }
    }
}