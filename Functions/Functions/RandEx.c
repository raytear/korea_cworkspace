#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>	//time()

int main()
{
	//����(��������) ���
	//srand(10);	//�õ�(seed) ����
	srand(time(NULL));

	/*
	int rndVal = rand();
	printf("%d\n", rndVal);
	*/

	//����(2���� ���)
	
	int coin = rand() % 2;
	printf("%d\n", coin);

	//�ո� - 0, �޸� - 1
	if (coin % 2 == 0)
	{
		printf("�ո�\n");
	}
	else
	{
		printf("�޸�\n");
	}
	
	//����, ����, �� ���
	int num = rand() % 3;
	printf("%d\n", num);

	switch (num)
	{
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		printf("����\n");
		break;
	}

	//�ֻ����� ��(1 ~ 6)
	int dice = rand() % 6 + 1;
	printf("%d\n", dice);

	//�ֻ��� 10�� ������
	for (int i = 1; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}
	

	return 0;
}