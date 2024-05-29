#include <stdio.h>
struct student{  
    int id;         // 학번
    char name[20];  // 이름 char* name;
    double grade;   // 학점
};
void stPrint(struct student s);
int main(void){
    struct student sArr[3]= {{101, "홍길동", 4.43},
    {102, "김길동", 3.43}, {103, "신길동", 4.01}};
    printf("학번\t이름\t학점\n");
    for(int idx=0; idx<3; idx++){
        stPrint(sArr[idx]); // 함수 호출    
    } // for
} // main
void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade); 
}