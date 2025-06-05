#include <stdio.h>

/*
	십진수를 이진수로 변환하는 프로그램 - 재귀함수
*/

int printBin(int a) {
	if(a == 0 || a == 1) {
		printf("%d", a);	//종료 조건
	}
	else {
		printBin(a / 2);
		printf("%d", a % 2);
	}
}
/*
	printBin(11), printBin(11/2), 1
	printBin(5), printBin(5/2),	  1
	printBin(2), printBin(2/2),   0
	printBin(1),				  1		//반복 종료

	아래에서 위로 표기 - 1011
*/
int main()
{
	int x = 11;

	printBin(x); //1011

	return 0;
}