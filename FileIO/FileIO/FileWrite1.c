#define _CRT_SECURE_NO_WARNINGS //fopen()
#include <stdio.h>

/*
	�ؽ�Ʈ ���� - ���ڸ� ����(����) ����
*/

int main()
{
	// ���� ����ü ������ ���� ����
	FILE* fp;

	// ���� ����
	// fopen(����, ������) //���� ��ġ - ���� ���
	// cfile ���͸�(����)�� �̸� �����Ǿ�� ��
	// out.txt�� ������ ������ ����ǰ�, ������ ���� ������
	fp = fopen("c:/cfile/out.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	// ���� ����
	// ���� 1�� ����
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	// ���ڿ� ���� 
	fputs("\nApple\n", fp);		//����
	fputs("\n���ƿ�\n", fp);		//�ѱ�

	// ���� ����
	fclose(fp);

	return 0;
}