//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";

	//파일 쓰기
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}

	fprintf(fp, "%s\n", str);
	fclose(fp);

	//파일 읽기
	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}

	//fgetc()로 읽기
	int ch; //코드값을 저장할 변수
	int i = 1;
	char buf[256]; //문자를 저장할 배열 생성

	/*
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	*/

	//fgets(저장공간, 크기, 스트림파일)로 읽기 - 문자열로 출력
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		printf("%03d: %s", i, buf);
		i++;
	}

	fclose(fp);

	return 0;
}