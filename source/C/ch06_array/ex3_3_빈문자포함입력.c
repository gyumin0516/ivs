#include <stdio.h>
// �ּ�(��������), �̸�(���ں�����)�� �Է¹ޱ�
int main (void){
    // �ּҸ� ���� ���� �� ���� ���� �ʿ� ����
    char name[128];
    char address[512];
    printf("�ּҴ� >>");
    gets(address);
    printf("�̸��� >>");
    scanf("%s", name, sizeof(name));
    printf("�Է��� �ּ� : %s\n", address); 
    printf("�Է��� �̸� : %s\n", name);
}