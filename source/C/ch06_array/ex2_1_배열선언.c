#include <stdio.h>
// 배열(array) : 동일 자료형 
int main (void){
    // 배열 선언 
    int subway[3];  
    subway[0] = 30; subway[1] = 40; subway[2] = 50;
    for(int idx=0;idx<3;idx++){
        printf("subway[%d]= %d\n", idx, subway[idx]);
    }
}