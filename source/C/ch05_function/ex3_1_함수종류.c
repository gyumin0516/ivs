#include <stdio.h>
void line(int cnt); // 함수 선언(반환값이 없는 함수)
void no_arg(); // 함수 선언(매개변수와 반환값이 없는 함수)
int main(void){
    line(40); // 함수 호출
    no_arg();
    line(50);
}
void line(int cnt){  // 함수 정의(함수 구현)
    for (int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}
void no_arg(){
    printf("반환값도 매개변수도 없는 함수\n");
}