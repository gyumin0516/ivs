#include <stdio.h>
struct Game_info{   
    char* name;
    int year;
    int price; 
};
int main(void){
    struct Game_info game_info1;
    game_info1.name = "���̹�c";
    game_info1.year = 2024;
    game_info1.price = 33000;
    struct Game_info* game_ptr = &game_info1;  // game_ptr�� game_info1�� �ּҸ� ����Ŵ
    printf("��������(game_info1) ���\n");
    printf("�����̸�: %s\n", game_info1.name);
    printf("��ÿ���: %d\n", game_info1.year);
    printf("���Ӱ���: %d\n", game_info1.price);

    printf("��������(game_ptr�����ͺ���) ���\n");
    printf("�����̸�: %s\n", (*game_ptr).name);
    printf("��ÿ���: %d\n", (*game_ptr).year);
    printf("���Ӱ���: %d\n", (*game_ptr).price);

    printf("��������(game_ptr�����ͺ���) ���\n");  // ����ü �������� �� ->�� ����ȭ �� �� ���� 
    printf("�����̸�: %s\n", game_ptr->name);
    printf("��ÿ���: %d\n", game_ptr->year);
    printf("���Ӱ���: %d\n", game_ptr->price);

}

