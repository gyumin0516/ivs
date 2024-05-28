#include <stdio.h>
// score를 입력받아 학점 출력
int main(void){
    int score;
    printf("점수는 >> ");
    scanf("%d", &score);
    if (90<=score && score<=100){
        printf("학점은 A");
    }else if(80<=score && score<90){
        printf("학점은 B");
    }else if(70<=score && score<80){
        printf("학점은 C");
    }else if(60<=score && score<70){
        printf("학점은 D");
    }else if(0<=score && score<60){
        printf("학점은 F");
    }else{
        printf("유효하지 않는 점수입니다");
    }
}
