#include <stdio.h>

int main()
{
	int a[] = { 21, 35, 71, 2, 97, 66 };

	//�Լ� ȣ��
	int max = findMax(a, 6);

	//���
	printf("�ִ밪: %d\n", max);

	return 0;
}

//�ִ밪�� ����ϴ� �Լ� ����
int findMax(int arr[], int len)
{
	int maxVal = arr[0];	//�ִ밪 ����
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > maxVal)
			maxVal = arr[i];
	}
	return maxVal;
}