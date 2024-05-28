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
        printf("%d���� %d������ ���� ���纸���� (%d���� ��ȸ�� ���ҽ��ϴ�) >> ",min, max, chance-turn);
        scanf("%d", &input);
        turn++;
        if (turn>=chance) {
            result = 0;
            printf("%d���� ��ȸ�� ��� ����ϼ̽��ϴ�. �����Դϴ�.\n", chance);
            printf("������ %d�Դϴ�\n", num);
        }
        if (input==num){
            printf("�����Դϴ� �����մϴ� %d������ ����", turn);
            result = 0;
        }else if(input < min || input > max){
            printf("���� ������ �ߺ��� �Է����ּ���\n");
        }else if(input>num){
            printf("Down\n");
            max=input-1;
        }else {
            printf("Up\n");
            min = input;
        }
       
    } 
}
