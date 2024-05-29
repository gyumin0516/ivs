#include <stdio.h>
struct Game_info{   
    char* name;
    int year;
    int price; 
};
int main(void){
    struct Game_info game_info1;
    game_info1.name = "사이버c";
    game_info1.year = 2024;
    game_info1.price = 33000;
    struct Game_info* game_ptr = &game_info1;  // game_ptr은 game_info1의 주소를 가르킴
    printf("게임정보(game_info1) 출력\n");
    printf("게임이름: %s\n", game_info1.name);
    printf("출시연도: %d\n", game_info1.year);
    printf("게임가격: %d\n", game_info1.price);

    printf("게임정보(game_ptr포인터변수) 출력\n");
    printf("게임이름: %s\n", (*game_ptr).name);
    printf("출시연도: %d\n", (*game_ptr).year);
    printf("게임가격: %d\n", (*game_ptr).price);

    printf("게임정보(game_ptr포인터변수) 출력\n");  // 구조체 포인터일 때 ->로 간소화 할 수 있음 
    printf("게임이름: %s\n", game_ptr->name);
    printf("출시연도: %d\n", game_ptr->year);
    printf("게임가격: %d\n", game_ptr->price);

}

