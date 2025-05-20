#include <stdio.h>

void callByVal(int, int); //����� �Ű������� �ڷ����� ��� ����
void callByRef(int*, int*);

int main()
{
	int x = 1, y = 2;
	int temp;

	printf("���� ���� ȣ��\n");
	callByVal(x, y);
	printf("x = %d, y = %d\n", x, y);

	printf("������ ���� ȣ��\n");
	callByRef(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	return 0;
}

void callByVal(int a, int b)
{
	int temp;
	//��ȯ
	temp = a;
	a = b;
	b = temp;
}

void callByRef(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}