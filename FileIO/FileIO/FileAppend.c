#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	파일 쓰기 추가 모드 - "a"
*/

int main()
{
	FILE* fp;
	char msg[] = "행운을 빌어요~";

	fp = fopen("out.txt", "a");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}

	//파일에 추가로 쓰기
	fputs("Good Luck~\n", fp);
	//서식문자 포맷 대응
	fprintf(fp, "%s\n", msg);

	fclose(fp);

	printf("파일 쓰기 완료!");

	return 0;
}