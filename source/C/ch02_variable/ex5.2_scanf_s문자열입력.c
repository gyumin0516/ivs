#include <stdio.h>

int main(void) {
	char gender, name[100];  // 전자는 gender라는 값을 가르키고 후자는 name이라는 100byte 주소의 맨 앞자리 주소를 가르킴
	printf("성별은 ?");
	scanf_s("%c", &gender);  // &가 주소를 지칭함
	printf("이름은 ?");
	scanf_s("%s", name, (unsigned)sizeof(name));  // unsigned 는 절대값
	printf("입력한 성별은 %c\n 이름은 %s입니다\n", gender, name);
}