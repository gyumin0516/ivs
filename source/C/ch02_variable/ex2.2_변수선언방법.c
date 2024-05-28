#include <stdio.h>
// 변수 선언 방법
// 한프로젝트에 main 두개 있으면 실행 안됨

int main(void) {
	// int는 4byte 
	// 1: 자료형 변수명 = 초기값;
	int num1 = 10; // 선언과 초기화를 한번에
	// 2: 자료형 변수명;
	int num2; // 선언만 함, 메모리 공간 할당만 해줘서 쓰레기값이 들어있음
	num2 = 20;
	printf("num1 = %d\t  num2 = %d\n", num1, num2);
	// 3: 자료형 변수명 = 값, 변수명 = 값;
	int num3 = 3, num4 = 4, num5 = 5;
	printf("num3 = %d\t  num4 = %d\t num5 = %d\n", num3, num4, num5);
	// 4: 자료형 변수명, 변수명;
	int n1, n2, n3;
	n1 = 1; n2 = 2; n3 = 3;
	printf("n1 = %d\t  n2 = %d\t n3 = %d\n", n1, n2, n3);
}