#include <stdio.h>
// ���� ���� ���
// ��������Ʈ�� main �ΰ� ������ ���� �ȵ�

int main(void) {
	// int�� 4byte 
	// 1: �ڷ��� ������ = �ʱⰪ;
	int num1 = 10; // ����� �ʱ�ȭ�� �ѹ���
	// 2: �ڷ��� ������;
	int num2; // ���� ��, �޸� ���� �Ҵ縸 ���༭ �����Ⱚ�� �������
	num2 = 20;
	printf("num1 = %d\t  num2 = %d\n", num1, num2);
	// 3: �ڷ��� ������ = ��, ������ = ��;
	int num3 = 3, num4 = 4, num5 = 5;
	printf("num3 = %d\t  num4 = %d\t num5 = %d\n", num3, num4, num5);
	// 4: �ڷ��� ������, ������;
	int n1, n2, n3;
	n1 = 1; n2 = 2; n3 = 3;
	printf("n1 = %d\t  n2 = %d\t n3 = %d\n", n1, n2, n3);
}