#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	���� ���� �߰� ��� - "a"
*/

int main()
{
	FILE* fp;
	char msg[] = "����� �����~";

	fp = fopen("out.txt", "a");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	//���Ͽ� �߰��� ����
	fputs("Good Luck~\n", fp);
	//���Ĺ��� ���� ����
	fprintf(fp, "%s\n", msg);

	fclose(fp);

	printf("���� ���� �Ϸ�!");

	return 0;
}