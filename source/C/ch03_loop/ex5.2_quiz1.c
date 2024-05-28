#include <stdio.h>
// 2단 부터 7단까지 구구단 출력
int main(void){
    int from = 2, to = 7;
    for (int i=1;i<10;i++){
        for (int j=from;j<=to;j++){
            printf("%d X %d = %d      ", j, i, j*i);
        }
        printf("\n");
    }
}