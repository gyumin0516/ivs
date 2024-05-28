#include <stdio.h>
// 피라미드 쌓기
int main(void){
    int floor = 5;
    for (int i=1;i<=floor;i++){
        for (int j=1;j<=floor-i;j++){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}