#include <stdio.h>

//return�� �ִ� �Լ�
//�������� ����ϴ� �Լ� ����
int square(int x)
{
	return x * x;
}

//���밪�� ����ϴ� �Լ� ����
int myAbs(int x)
{
	//x�� ������ ����� �� ����
	if (x < 0)
	{
		return -x;
	}
	else //x > 0
	{
		return x;
	}
}

//�� ���� ���ϴ� �Լ� ����
double add(double x, double y)
{
	return x + y;
}

int main()
{
	int value1, value2;
	double value3;

	//square() �Լ� ȣ��
	value1 = square(4);

	//myAbs() ȣ��
	value2 = myAbs(-5);

	//add() ȣ��
	value3 = add(2.54, 3.3);

	//���
	printf("%d\n", value1);
	printf("%d\n", value2);
	printf("%.2f\n", value3);

	return 0;
}