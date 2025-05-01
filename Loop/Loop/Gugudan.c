#include <stdio.h>

int main()
{
	/*
	    2 x 1 = 2
		2 x 2 = 4
		2 x 3 = 6
		....
		2 x 8 = 16
		2 x 9 = 18
		//반복변수는 곱하는 수임
	*/
	int dan;
	printf("단을 입력하세요: ");
	scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}

	return 0;
}