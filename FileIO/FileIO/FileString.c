//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";

	//���� ����
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	fprintf(fp, "%s\n", str);
	fclose(fp);

	//���� �б�
	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	//fgetc()�� �б�
	int ch; //�ڵ尪�� ������ ����
	int i = 1;
	char buf[256]; //���ڸ� ������ �迭 ����

	/*
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	*/

	//fgets(�������, ũ��, ��Ʈ������)�� �б� - ���ڿ��� ���
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		printf("%03d: %s", i, buf);
		i++;
	}

	fclose(fp);

	return 0;
}