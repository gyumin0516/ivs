#include <stdio.h>
void line(int cnt); // �Լ� ����(��ȯ���� ���� �Լ�)
void no_arg(); // �Լ� ����(�Ű������� ��ȯ���� ���� �Լ�)
int main(void){
    line(40); // �Լ� ȣ��
    no_arg();
    line(50);
}
void line(int cnt){  // �Լ� ����(�Լ� ����)
    for (int i=0;i<cnt;i++){
        printf("=");
    }
    printf("\n");
}
void no_arg(){
    printf("��ȯ���� �Ű������� ���� �Լ�\n");
}