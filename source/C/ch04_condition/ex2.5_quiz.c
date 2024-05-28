#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   

int main(void){
    srand((unsigned int)time(NULL));
    int num = rand()%100+1;
    int input = 0;
    int result = 1;
    int turn = 0;
    int chance = 5; 
    int min = 1, max = 100;
    while (result){
        printf("%d부터 %d사이의 수를 맞춰보세요 (%d번의 기회가 남았습니다) >> ",min, max, chance-turn);
        scanf("%d", &input);
        turn++;
        if (turn>=chance) {
            result = 0;
            printf("%d번의 기회를 모두 사용하셨습니다. 실패입니다.\n", chance);
            printf("정답은 %d입니다\n", num);
        }
        if (input==num){
            printf("정답입니다 축하합니다 %d번만의 성공", turn);
            result = 0;
        }else if(input < min || input > max){
            printf("수의 범위를 잘보고 입력해주세요\n");
        }else if(input>num){
            printf("Down\n");
            max=input-1;
        }else {
            printf("Up\n");
            min = input;
        }
       
    } 
}
