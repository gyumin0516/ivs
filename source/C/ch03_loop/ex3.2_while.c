#include <stdio.h>
int main (void){
    int i = 1;
    while (i<=10){
        printf("%d. Hello, world\n", i++);  // 뒤에다 ++ 붙여주면 프린트되고 ++
    }
}