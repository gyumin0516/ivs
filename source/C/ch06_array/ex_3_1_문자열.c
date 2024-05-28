#include <stdio.h>
// jenny를 저장하면 jenny\0까지 배열로 저장됨
int main(void){
    //char* name = "jenny";  이렇게 해도 똑같음
    char name[] = "jenny";
    for(int idx=0;idx<6;idx++){
        printf("index : %d : 글자 : %c\n", idx, name[idx]);
    } 
}