#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	���� ���� ����
	- ��ǻ�Ͱ� ������ ����
	- ����ڰ� ������ ���� �Է�
	1. ������ �� = ����, ����
	2. ������ �� > ����
	3. ������ �� < ����
*/



int main()
{
	srand(time(NULL));
	int randNum;	//��ǻ�Ͱ� ������ ����
	int guessNum;	//����ڰ� ������ ��
	int count = 5;		//�õ��� Ƚ��

	randNum = rand() % 50 + 1;	//1 ~ 50������ ����
	//printf("��ǻ���� ��: %d\n", randNum);

	while (1)
	{
		printf("���� Ƚ�� %d��\n", count--);
		printf("����������(1~50 �Է�): ");
		scanf_s("%d", &guessNum);

		if (guessNum == randNum)
		{
			printf("�����̿���\n");
			printf("��ǻ���� ��: %d", randNum);
			break;
		}
		else if (guessNum > randNum)
		{
			printf("�ʹ� Ŀ��!\n");
		}
		else 
		{
			printf("�ʹ� �۾ƿ�!\n");
		}

		if (count == 0)
		{
			printf("���� Ƚ���� 0�Դϴ�. �ƽ��� �����߾��.");
			break;
		}
	}

return 0;
}