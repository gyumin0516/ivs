#include <stdio.h>

int main(void) {
	char gender, name[100];  // ���ڴ� gender��� ���� ����Ű�� ���ڴ� name�̶�� 100byte �ּ��� �� ���ڸ� �ּҸ� ����Ŵ
	printf("������ ?");
	scanf_s("%c", &gender);  // &�� �ּҸ� ��Ī��
	printf("�̸��� ?");
	scanf_s("%s", name, (unsigned)sizeof(name));  // unsigned �� ���밪
	printf("�Է��� ������ %c\n �̸��� %s�Դϴ�\n", gender, name);
}