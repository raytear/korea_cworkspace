#include <stdio.h>

/*
	��� ������ : +, -, *, /, %
*/
int main()
{
	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	//����(�����) ����ȯ(Type Conversion)
	printf("%.1lf\n", (double)a / b);
	printf("%d\n", a % b);

	//���� ������ - ++(1����), --(1����)
	//+=2 (2����)

	//��ġ ������	//a = a + 1
	printf("%d\n", a++); //99	//���ϱ⸸ �ϰ� �� ����� ����
	printf("%d\n", a);  //100	//a�� �� ���(��ġ ����)

	//��ġ ������
	printf("%d\n", ++a); //101	//���� ���� ����
	printf("%d\n", a); //101	//a�� �� ���(��ġ ����)

	//��ġ ������	//a = a - 1
	printf("%d\n", a--); //101
	printf("%d\n", a); //100

	//��ġ ������
	printf("%d\n", --a); //99
	printf("%d\n", a); //99

	return 0;
}