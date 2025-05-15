#include <stdio.h>

/*
	포인터의 계산(연산)
*/

int main()
{
	int x = 10, y = 20, z;
	int* arr[3]; //포인터 배열

	arr[0] = &x; //변수의 주소 저장
	arr[1] = &y;
	arr[2] = &z;

	*arr[2] = *arr[0] + *arr[1]; //역참조로 연산

	printf("*arr[2]의 값: %d\n", *arr[2]);
	printf("z의 값: %d\n", z);

	//배열과 포인터의 연산
	int a[5] = { 1, 2, 3, 4, 5 };
	int* b;
	int i;

	printf("기존 배열 a의 값 출력\n");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("기존배열 a의 각 요소에 10을 더하기\n");
	b = a; //&a[0]

	//*b = *b + 10; //첫번째 요소에 10 더함
	//*(b + 0) = *(b + 0) + 10;
	//printf("%d\n", *(b + 0));
	
	//저장(연산)
	for (i = 0; i < 5; i++)
		*(b + i) += 10;

	//출력
	for (i = 0; i < 5; i++)
		printf("%d ", *(b + i));

	return 0;
}
