#include <stdio.h>
// ���� : ������(int), ������(����'', ���ڿ�"")
// �ּ� �ޱ�: ctrl + k, c 
// �ּ� ����: ctrl + k, u 
// char �� 1byte �� ���� ���� '��'�� 2byte�� �Ұ�
// ���ڰ� ����Ǹ� ����\0 ���� ����ż� 5byte �ʿ�
// ���� �̸��� ���ڷ� ���۵Ǹ� �ȵ�
// char* �� �迭�� �ּҸ� ����Ŵ

int main(void) {
	int age = 27;
	char gender = 'F';
	//char name[] = "����";
	char* name = "����"; //�̷��� �ص� ���� ����
	age = 30;
	printf("�ȳ��ϼ���, %d��(%c) %s�Դϴ�\n", age, gender, name);
	printf("�ȳ��ϼ���, %d��(%c) %s�Դϴ�\n", age, gender, name);
	printf("�ȳ��ϼ���, %d��(%c) %s�Դϴ�\n", age, gender, name);
}
