#include <stdio.h>
/*서식지정자 : %d, %f, %.3lf, %c, %s
*/ 
int main(void) {
	int num1 = 10;
	int num2 = 11;
	printf("두수의 합 = %d\n", num1 + num2);
	// 정수형(4byte)과 정수형(4byte) 사칙연산 결과는 정수형(4byte)이 나옴
	printf("두수의 평균 = %.1lf\n", (num1 + num2) / 2.0);   
	// 2로 하면 정수형이지만 2.0으로 하면 double이 되서 사칙연산 결과가 doouble됨
	printf("두수의 평균 = %.1lf\n", ((double)num1 + num2) / 2); 
}