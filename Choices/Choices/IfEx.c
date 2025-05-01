#include <stdio.h> //printf()

int main()
{
	/*
		if(조건식){ //조건식이 참(true - 1)
		   실행문
		}
		나이가 15세 이상이면 "관람가" 출력
	*/
	int age = 17;

	/*if (age >= 15)
	{
		printf("관람가!\n");
	}
	printf("나이는 %d세 입니다\n", age);*/

	//나이가 15세 이상이면 "관람가", 아니면 "관람불가" 출력
	if (age >= 15)
	{
		printf("관람가!\n");
	}
	else
	{
		printf("관람불가!\n");
	}
	printf("나이는 %d세 입니다\n", age);
	return 0;
}