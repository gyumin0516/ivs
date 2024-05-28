#include <stdio.h>
// 변수 : 정수형(int), 문자형(문자'', 문자열"")
// 주석 달기: ctrl + k, c 
// 주석 해제: ctrl + k, u 
// char 는 1byte 만 저장 가능 '가'는 2byte라 불가
// 문자가 저장되면 제니\0 까지 저장돼서 5byte 필요
// 변수 이름은 숫자로 시작되면 안됨
// char* 는 배열의 주소를 가르킴

int main(void) {
	int age = 27;
	char gender = 'F';
	//char name[] = "제니";
	char* name = "제니"; //이렇게 해도 위와 동일
	age = 30;
	printf("안녕하세요, %d살(%c) %s입니다\n", age, gender, name);
	printf("안녕하세요, %d살(%c) %s입니다\n", age, gender, name);
	printf("안녕하세요, %d살(%c) %s입니다\n", age, gender, name);
}
