#include <stdio.h>

//�ǽ� ���� Ǯ��

int square();
float triangle();
int main()
{
	int rectArea;
	float triArea;

	//���簢���� ���� ���
	rectArea = square(4);
	
	//�ﰢ���� ���� ���
	triArea = triangle(3, 5);

	printf("���簢���� ���� : %dcm\n", square(4));
	printf("�ﰢ���� ���� : %.1fcm\n", triArea);

	return 0;
}

int square(int x)
{
	return x * x;
}

float triangle(int size, int height)
{
	//��������ȯ �ؾ� �Ǽ��� ��ȯ��
	float area = (float)(size * height) / 2;
	return area;
}