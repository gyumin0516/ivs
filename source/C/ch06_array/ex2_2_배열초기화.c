#include <stdio.h>
// 배열(array) : 동일 자료형 
int main (void){
    // 배열 선언 
    int subway[] = (30,40,50); // subway라는 변수에 맨 앞자리 주소가 들어감  
    int bus[10] = (30,40,50);  // 10개 배열에 일부만 초기화 하면 나머지 다 0으로 들어감
    for(int idx=0;idx<3;idx++){
        printf("subway[%d]= %d\n", idx, subway[idx]);
    }
}