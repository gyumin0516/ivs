#include <stdio.h>
// Call by value vs. reference
// void는 return이 없음 
void sum(int from, int to, int* tot); // from에 int값이 있다, tot가 가리키는 주소값을 가면 int값이 있다.
int main(void){
    int a=1, b=10; int* tot;  // tot의 주소값이 가르키는 곳에 int 값 저장됨
    sum(a, b, &tot);
    printf("%d부터 %d까지의 누적합은 %d\n", a, b, tot);
    a = 10; b = 100;
    sum(a, b, &tot);
    printf("%d부터 %d까지의 누적합은 %d\n", a, b, tot);
}
void sum(int from, int to, int* tot){
    *tot = 0;
    for (int i=from; i<=to; i++){
        *tot += i;
    }
}
