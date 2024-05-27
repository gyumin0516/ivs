#include <stdio.h>
// 실수형 (float 4byte, double 8byte)
// 정수형 (int 4byte, long long : 2^32 이상의 수)
//int main(void) {
//	int age = 20;
//	long long money = 2200000000L; // 긴 수 뒤에 L 붙여야함 
//	float f = 3.14159265359F; // 소수점이면 무조건 double로 저장돼서 F 붙여줘야함 
//	double d = 3.14159265359;
//
//	printf("f = %.11f\n d = %.11lf\n", f, d); // .11은 소수점 11자리까지 출력해라
//	if (f == d) {
//		printf("f와 d는 같다\n");
//	}
//	else {
//		printf("f와 d는 같지 않다\n");
//	}
//
//	f = 10.1F;
//	d = 10.1;
//
//	printf("f = %.11f\n d = %.11lf\n", f, d); // .11은 소수점 11자리까지 출력해라
//	if (f == d) {
//		printf("f와 d는 같다\n");
//	}
//	else {
//		printf("f와 d는 같지 않다\n");
//	}
//}
// f가 계속 다른 데이터를 출력하므로 float는 쓰면 안된다