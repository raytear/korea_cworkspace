#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�̹��� ���� �����ϱ�
*/

#define BUFFER_SIZE 4096

int main()
{
	FILE* fin = fopen("flower.jpg", "rb"); //�б�
	FILE* fout = fopen("flower2.jpg", "wb"); //����
	if (fin == NULL || fout == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	//���۸� �̿��� ����(������ ����)
	int buf[BUFFER_SIZE];
	int bytesRead; //���� ����Ʈ ����

	while ((bytesRead = fread(buf, sizeof(int), BUFFER_SIZE, fin)) > 0) {
		fwrite(buf, sizeof(int), bytesRead, fout);
	}

	fclose(fin);
	fclose(fout);

	return 0;
}