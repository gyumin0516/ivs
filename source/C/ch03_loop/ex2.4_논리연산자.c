#include <stdio.h>
// 논리 연산자 : &&(and), ||(or), !(not)
int main(void){
    int i = 1, j = 10, h = 10;
    // &&연산의 경우 좌항이 false인 경우 우항은 실행하지 않고 결과물 false로 출력 따라서 j는 10
    printf("(i>j)&&(++j>h) = %s\n", (i>j)&&(++j>h)?"참":"거짓");   
    printf("j = %d\n", j);
    // ||연산의 경우 좌항이 true인 경우 우항은 실행하지 않고 결과물 true로 출력
    printf("(i<j)||(++j>h) = %s\n", (i<j)||(++j>h)?"참":"거짓");   
    printf("j = %d\n", j);       
}