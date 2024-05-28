#include <stdio.h>
// score를 입력받아 학점 출력
int main(void){
    int score;
    printf("점수는 >> ");
    scanf("%d", &score);
    int temp = score==100?99:score; // score가 100일 때 예외처리
    switch (temp/10)
    {
    case 9:
        printf("학점은 A"); break;
    case 8:
        printf("학점은 B"); break;
    case 7:
        printf("학점은 C"); break;
    case 6:
        printf("학점은 D"); break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("학점은 F"); break;
    default:
        printf("유효하지 않는 점수입니다");    
    }
}
