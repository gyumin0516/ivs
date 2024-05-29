#include <stdio.h>
// jenny를 저장하면 jenny\0까지 배열로 저장됨
int main(void){
    // 세가지 방법 모두 똑같음
    //char* name = "jenny"; 
    //char name[] = "jenny";
    char name[] = {'j', 'e', 'n', 'n', 'y', '\0'};
    printf("%s\n", name);
    // for(int idx=0;idx<6;idx++){
    //     printf("index : %d : 글자 : %c\n", idx, name[idx]);
    // } 
}