#include <stdio.h>

/*
	정적 변수(고정된 변수) - static을 변수 앞에 붙임(생성)
	- 값을 유지하고 공유하고 프로그램이 종료되면 소멸됨
*/
void call() //void는 반환 자료형이 없음(return 없음)
{
	static int x = 0;
	x += 1; //x = x + 1;
	printf("현재 호출은 %d번째입니다.\n", x);
}

int main()
{
	//call() 호출
	call();
	call();
	call();
		
	return 0;
}
