#include <stdio.h>

/* ���ڿ��� ������ */

int main()
{
	char msg[] = "Good Luck"; //���ڿ��� ũ�� - 10
	char* p = msg; //&msg[0]
	int i;

	printf("%dbyte %dbyte\n", sizeof(msg), sizeof(p));
	printf("%s\n", msg);

	//���ڿ��� �����ּҿ� �迭�� �̸��� �����ϴ�
	//�����͸� ����� ��� - ���Ĺ��� %p�� �̿��ص� ��
	printf("%p %p\n", msg, p);
	printf("\n");

	//p �����ͷ� ���
	printf("%s\n", p + 0); //Good Luck
	printf("%s\n", p + 1); //ood Luck
	printf("%s\n", p + 2); //od Luck
	printf("%s\n", p + 3); //d Luck
	printf("\n");

	//p ������ �������� ��� - �ѱ��ھ� ���
	//printf("%c\n", *(p + 0)); //G
	//printf("%c\n", *(p + 1)); //o
	int size = sizeof(msg) / sizeof(msg[0]); //10 / 1 = 10

	for (i = 0; i < size; i++) {
		printf("%c", *(p + i));
	}

	return 0;
}