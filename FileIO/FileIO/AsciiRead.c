#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���� ����
	FILE* fp;
	int ch; //�ƽ�Ű �ڵ带 �о ������ ����

	fp = fopen("ascii.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	/*
	//���� �б�
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break; //EOF(End Of File) = -1
		printf("%c", ch);
	}
	*/

	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}

	//���� ����
	fclose(fp);

	return 0;
}