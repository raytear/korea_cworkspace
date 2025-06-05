#include <stdio.h>

/*
	팩토리얼(계승) 구현하기
	5! = 5x4x3x2x1
*/
int getGob(int n) {
	int gob = 1;
	int i;

	for (i = 0; i < 5; i++) {
		gob *= i; //gob = gob * i;
	}
	return gob;
}

int facto(int n) {
	if (n <= 1)
		return 1; //종료 조건
	else
		return n * facto(n - 1); //실행 값
}

/*
	5! = 5x4x3x2x1
	5! = 5x4!
	4! = 4x3x2x1
	4! = 4x3!
	...
*/

int main()
{
	//1부터 5까지 곱하기
	//printf("결과값: %d\n", getGob);
	
	//재귀 호출
	printf("1!= %d\n", facto(1)); //1
	printf("2!= %d\n", facto(2)); //2
	printf("3!= %d\n", facto(3)); //6
	printf("4!= %d\n", facto(4)); //24
	printf("5!= %d\n", facto(5)); //120
	
	return 0;
}