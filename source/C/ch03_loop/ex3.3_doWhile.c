#include <stdio.h>
int main (void){
    int i = 1;
    do{
        printf("%d. Hello, world\n", i++);  
    }while(i<=10);
}