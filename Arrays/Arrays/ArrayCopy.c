#include <stdio.h>

int main()
{
	//�迭�� ����
	char a1[] = "NET"; //���ڿ��� ������ �迭 a1�� ����
	char a2[4];		   //������ �迭 a2 ����
	int i;			   //�ݺ� ����

	printf("%d\n", sizeof(a1)); //4 �� �� ���� '\0'(NULL)�� ������

	//������ ���� ���
	printf("%c\n", a1[0]);
	printf("%c\n", a1[1]);
	printf("%c\n", a1[3]); //�������(NULL)
	printf("%c\n", a1[2]);

	//a1�� a2�� ���� �� a2[0] = a1[0]
	int size = sizeof(a1) / sizeof(a1[0]); // 4byte / 1byte = 4
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[i];
	}

	//a2�� ��� - �� ����(%c)�� ���
	for (i = 0; i < size; i++)
	{
		printf("%c", a2[i]);
	}
	printf("\n");

	//���ڿ�(%s)�� ���
	printf("%s\n", a2);

	//a1�� a2�� �Ųٷ� ���� �� a2[0] = a1[2] ('T'�� ����)
	for (i = 0; i < size; i++)
	{
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';

	printf("%s\n", a2);

	return 0;
}