#include <stdio.h>
// 원하는 단을 입력받아 그 단의 구구단 출력
int main(void){
    int input;
    printf("몇단 구구단을 출력하시겠습니까 >>");
    scanf("%d", &input);
    printf("%d단 구구단입니다\n");

    for (int i=1;i<10;i++){
        printf("%d X %d = %d\n", input, i, input*i);
    }
}