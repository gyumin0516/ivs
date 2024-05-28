#include <stdio.h>
// 증강연산자 : ++ -- 
int main(void) {
    int n1 = 10;
    printf("++n1 = %d\n", ++n1);
    printf("n1++ = %d\n", n1++);  // printf를 먼저 수행한후 ++이 수행됨
    printf("n1 = %d\n", n1); 
}