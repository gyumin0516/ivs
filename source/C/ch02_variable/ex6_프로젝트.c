#include <stdio.h>

int main(void) {
	char gender[100], name[100]; 
	int korean, english, math;

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("������ �Է��ϼ���(��/��) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &korean, &english, &math);
	printf("--- �л����� --- \n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� = %d\n", korean);
	printf("���� = %d\n", english);
	printf("���� = %d\n", math);
	printf("�հ� = %d\n", korean + english + math);
	printf("��� = %.2lf\n", (korean+english+math)/3.0);
}