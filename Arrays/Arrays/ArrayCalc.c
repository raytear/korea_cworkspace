#include <stdio.h>

int main()
{
	/*
		ũ�Ⱑ 10�� ������ �迭�� ����
		1���� 10���� �����ϰ�, �հ踦 ����ϱ�
	*/
	int a[10];
	int i; //�ݺ� ����
	int total = 0; //�հ踦 ������ ����

	//��� ����
	/*
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	*/

	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
		total += a[i]; //total = total + a[i];
		printf("a[%d] = %d, total = %d\n", i, a[i], total);
	}
	printf("�հ�: %d\n", total);

	//���
	/*
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	*/


	return 0;
}