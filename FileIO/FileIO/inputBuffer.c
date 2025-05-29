#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int id;			//사번
	char name[10];	//이름

	printf("사번 입력: ");
	scanf("%d", &id);

	while (getchar() != '\n');	//fgets() 사용시 반드시 적어줘야 함

	printf("이름 입력: ");
	//scanf("%s", name);
	//fgets()는 '\n'을 가져가버리므로 입력이 어려움 
	fgets(name, sizeof(name), stdin); //stdin - 표준 입력 스트림

	printf("사번: %d\n", id);
	printf("이름: %s\n", name);

	return 0;
}