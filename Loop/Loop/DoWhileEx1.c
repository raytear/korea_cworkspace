#include <stdio.h>

/*
	do ~ while��
	- while���� ������
	- �� �ѹ��� ����� �� �ֵ��� �Ҷ� ����Ѵ�.
*/

int main()
{
	//1 ~ 10���� ���
	int n = 1;
	/*while (n < 11)
	{
		printf("%-3d", n);
		n++;
	}*/

	//do ~ while ����
	do {
		printf("%-3d", n);
		n++;
	} while (n < 11);

	return 0;
}