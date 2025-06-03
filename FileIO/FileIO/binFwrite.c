#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	���̳ʸ� ���� �а� ����
	- byte ���
	- .dat, .db, �̹���, ����, ����
*/

int main()
{
	//���� ����
	int buf1[4] = { 0xff, 0x56, 0x78, 0xfa };
	int buf2[4]; //���� ������ ������ �迭
	FILE* fp;

	//���� ��� - "wb"
	fp = fopen("datas.dat", "wb");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	//���� ���� - size_t�� �� int��
	//fwrite(���۰���, ������ ũ��, ����� ũ��, ���Ͻ�Ʈ��)
	fwrite(buf1, sizeof(int), 4, fp);
	
	//���� ����
	fclose(fp);

	//���̳ʸ� ���� �б�
	fp = fopen("datas.dat", "rb");
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1;
	}

	//fread(���۰���, ������ ũ��, ����� ũ��, ���Ͻ�Ʈ��)
	fread(buf2, sizeof(int), 4, fp);

	//����Ϳ� ���(ǥ�� ��� ��Ʈ��)
	printf("%x %x %x %x\n", buf2[0], buf2[1], buf2[2], buf2[3]); //16����
	printf("%d %d %d %d\n", buf2[0], buf2[1], buf2[2], buf2[3]); //10����

	fclose(fp);

	return 0;
}