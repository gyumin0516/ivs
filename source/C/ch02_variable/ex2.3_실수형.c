#include <stdio.h>
// �Ǽ��� (float 4byte, double 8byte)
// ������ (int 4byte, long long : 2^32 �̻��� ��)
//int main(void) {
//	int age = 20;
//	long long money = 2200000000L; // �� �� �ڿ� L �ٿ����� 
//	float f = 3.14159265359F; // �Ҽ����̸� ������ double�� ����ż� F �ٿ������ 
//	double d = 3.14159265359;
//
//	printf("f = %.11f\n d = %.11lf\n", f, d); // .11�� �Ҽ��� 11�ڸ����� ����ض�
//	if (f == d) {
//		printf("f�� d�� ����\n");
//	}
//	else {
//		printf("f�� d�� ���� �ʴ�\n");
//	}
//
//	f = 10.1F;
//	d = 10.1;
//
//	printf("f = %.11f\n d = %.11lf\n", f, d); // .11�� �Ҽ��� 11�ڸ����� ����ض�
//	if (f == d) {
//		printf("f�� d�� ����\n");
//	}
//	else {
//		printf("f�� d�� ���� �ʴ�\n");
//	}
//}
// f�� ��� �ٸ� �����͸� ����ϹǷ� float�� ���� �ȵȴ�