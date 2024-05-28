#include <stdio.h>
#include<stdbool.h> // True, False 불러오기
// 0이 아니면 다 true 0만 false
// 비교연산자 : < <= > >= == !=
// 삼항연산자 : 조건 ? (조건이 참일때의 값) : (조건이 거짓일 때 값)
int main(void){
    int n1 = 10, n2 = 5;
    bool result = n1<=n2; // bool은 true나 false 저장
    printf("%d %s %d는 %s\n", n1, "<=", n2, result?"참":"거짓");

}