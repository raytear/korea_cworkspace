#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�ؽ�Ʈ ����(.txt)�� �б�
	- fgetc() - �� ���ھ� �б�
	- fgets() - ������ ���� �б�
*/

int main()
{
	FILE* fp;	//���� ����ü ����
	int ch;		//���� ���� ������ ����

	fp = fopen("c:/cfile/out.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	// ���� �б�
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	/*
	while (1) {
		ch = fgetc(fp);
		//EOF(End Of File)�� -1�� ����
		if (ch == EOF) break;
		printf("%c", ch);
	}
	*/

	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}