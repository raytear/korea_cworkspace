#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep()

/*
	�ð� �Լ� - time.h ����
	- time_t �ڷ����� ���
*/
int main()
{
	time_t now;
	//long now;
	now = time(NULL); //time(NULL) �ð��� ��� �帧�� �ǹ�
	
	//ld - long decimal
	//���н�(�ü��) ����� �������� ��
	//��(second) ����
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %1d��\n", now);
	
	//��(day)�� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %1d��\n",
		now / (24 * 60 * 60));

	//��(year)���� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %1d��\n",
		now / (365 * 24 * 60 * 60));
	
	/*
	//���� �ð� ����
	time_t start, end;

	start = time(NULL); //���� �ð�
	printf("���� �ð�: %1d��\n", start);

	//1 ~ 10���� ���
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		//Sleep(1000);	//1�� = 1000
		Sleep(500);		//0.5�� = 500

	}

	end = time(NULL);	//���� �ð�
	printf("���� �ð�: %1d��\n", end);
	printf("���� �ð�: %1d��\n", (end - start));
	*/

	//������ ����ð� ����
	clock_t start, end;
	double elapsedTime;	//�ҿ� �ð�

	start = clock();	//���� �ð�
	//1 ~ 10���� ���
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		//Sleep(1000);	//1�� = 1000
		Sleep(500);		//0.5�� = 500
	}
	end = clock();	//���� �ð�

	//CLOCKS_PER_SEC - �ʴ� �ð� ���
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("�ҿ� �ð�: %.2lf��\n", elapsedTime);
	
	return 0;
}