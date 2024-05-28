#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 1level: 1~4 2level: 5~8 3level: 9~12

int get_random_number(int level);
void show_question(int level, int num1, int num2);
int main(void){
    srand((unsigned int) time(NULL));
    int ans;
    int level;
    for (int level=1;level<=3;level++){
        int num1 = get_random_number(level);
        int num2 = get_random_number(level);
        show_question(level, num1, num2);
        scanf("%d", &ans);
        if(ans==num1*num2){
            printf("%d단계 정답입니다\n", level);
        }else{
            printf("%d단계 오답입니다. 실패 종료입니다\n", level);
            break;
        }
    }
    if(level>3){
        printf("3단계까지 잘 오셨습니다. 성공입니다\n");
    }    
}

int get_random_number(int level){
    return rand()%4+1+(level-1)*4;
}
void show_question(int level, int num1, int num2){
    printf("%d레벨 구구단을 외자~\n", level);
    printf("%d X %d >> ", num1, num2);
}