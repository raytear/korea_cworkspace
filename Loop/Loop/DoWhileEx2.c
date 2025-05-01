#include <stdio.h>

/*
	숫자를 계속 입력받고
	-1을 입력하면 종료
*/

int main()
{
	int num = -1;
	//1. while문
	/*while (num != -1)  //while문 안으로 들어갈수 없음
	{
		printf("-1 입력시 종료: ");
		scanf_s("%d", &num);
	}*/

	//2. do ~ while문
	/*do {
		printf("-1 입력시 종료: ");
		scanf_s("%d", &num);
	} while (num != -1);*/

	//2. while ~ if ~ break(조건반복문)
	while (1)
	{
		printf("-1 입력시 종료: ");
		scanf_s("%d", &num);
		if (num == -1)
			break;
	}

	return 0;
}