#include <stdio.h>
/*
	���(recursive) �˰��� : �ڱ� �ڽ��� ȣ��(�Լ�)�ϴ� ���� ���Ѵ�.
	�Լ� ���ο� ���� �ڱ� �ڽ� �Լ�()
	���ѹݺ��� �ϹǷ� ���� ������ �ʼ���.
*/

void sos(int n) {
	printf("Help Me!!\n");
	n--;
	if(n > 0) //���� ����
		sos(n);
}

/*
	n=4, sos(4), Help Me!!
	n=3, sos(3), Help Me!!
	n=2, sos(2), Help Me!!
	n=1, sos(1), Help Me!!
	n=0, �ݺ� ����
*/

int main()
{
	sos(4);

	return 0;
}