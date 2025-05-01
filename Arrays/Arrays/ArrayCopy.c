#include <stdio.h>

int main()
{
	//배열의 복사
	char a1[] = "NET"; //문자열을 저장한 배열 a1을 선언
	char a2[4];		   //복사할 배열 a2 선언
	int i;			   //반복 변수

	printf("%d\n", sizeof(a1)); //4 → 맨 끝에 '\0'(NULL)이 생략됨

	//각각의 문자 출력
	printf("%c\n", a1[0]);
	printf("%c\n", a1[1]);
	printf("%c\n", a1[3]); //비어있음(NULL)
	printf("%c\n", a1[2]);

	//a1을 a2에 복사 → a2[0] = a1[0]
	int size = sizeof(a1) / sizeof(a1[0]); // 4byte / 1byte = 4
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[i];
	}

	//a2를 출력 - 각 문자(%c)로 출력
	for (i = 0; i < size; i++)
	{
		printf("%c", a2[i]);
	}
	printf("\n");

	//문자열(%s)로 출력
	printf("%s\n", a2);

	//a1을 a2에 거꾸로 복사 → a2[0] = a1[2] ('T'가 저장)
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';

	printf("%s\n", a2);

	return 0;
}