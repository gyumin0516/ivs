#include <stdio.h>
#include <stdlib.h>  // 난수 발생 함수 
#include <time.h>    // 초기화 함수 
// rand() : 0 ~ 32767까지의 난수 발생 --> 보자기에서 순서대로 꺼내오는 방식
// 난수발생 전 초기화 작업 필수
int main(void){
    srand((unsigned int)time(NULL));  // 난수 초기화
    printf("%d\n", rand()%100);       // 100 미만의 난수 발생
    printf("%d\n", rand()%100+1);     // 1 ~ 101 사이의 난수
    printf("%d\n", rand()%45+1);      // 1 ~ 45 사이의 난수
}