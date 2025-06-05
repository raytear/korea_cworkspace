#include <stdio.h>
/*
	- 토글 알고리즘 : 상태(플래그)를 바꾸는 알고리즘
	  어떤 상태가 계속 유지되는 것
	  예) 한/영, CapsLock
*/

int main()
{
	int a[5] = { 9, 8, 7, 6, 7 };
	int i;
	int count = 0; //찾은 요소 개수

	//요소 7찾기
	for (i = 0; i < 5; i++) {
		if (a[i] == 7) {
			printf("7 발견!\n");
			count++;
		}
	}

	printf("%d개 발견\n", count);

	//요소 7을 1개 발견하면 종료
	int sw = 0; //상태(플래그) 0-찾지 못함, 1-찾음
	for (i = 0; i < 5; i++) {
		if (a[i] == 3) {
			printf("7 발견!\n");
			sw = 1;
			break;
		}
	}

	if (sw == 0) {
		printf("7 발견 못함!\n");
	}

	return 0;
}