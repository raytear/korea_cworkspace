#include <stdio.h>
#include <stdlib.h>
/*
	알파벳 대문자를 저장할 문자형 배열 26개 동적 할당
	메모리 영역 - 힙(heap) 영역
*/
int main()
{
	char* pc;
	int i; //반복 변수

	pc = (char*)malloc(sizeof(char) * 26); // 1 x 26 = 26
	if(pc == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //강제 종료
	}

	/*
	pc[0] = 'A' + 0; //A
	pc[1] = 'A' + 1; //B
	pc[2] = 'B' + 1; //C
	
	printf("%c %c %c\n", pc[0], pc[1], pc[2]);
	*/

	// 알파벳 저장
	for (i = 0; i < 26; i++) {
		pc[i] = 'A' + i;
	}

	// 출력
	for (i = 0; i < 26; i++) {
		printf("%c ", pc[i]);
	}
	printf("\n");

	// 역참조로 저장 및 출력
	/*
	*pc = 'A';				//A
	*(pc + 1) = 'A' + 1;	//B
	*(pc + 2) = 'A' + 2;	//C

	printf("%c %c %c\n", *pc, *(pc + 1), *(pc + 2));
	*/

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'A' + i;
	}

	for (i = 0; i < 26; i++) {
		printf("%c ", *(pc + i));
	}
	printf("\n");
	

	free(pc); //메모리 반납

	return 0;
}