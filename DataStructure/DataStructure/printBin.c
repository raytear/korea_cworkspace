#include <stdio.h>

/*
	�������� �������� ��ȯ�ϴ� ���α׷� - ����Լ�
*/

int printBin(int a) {
	if(a == 0 || a == 1) {
		printf("%d", a);	//���� ����
	}
	else {
		printBin(a / 2);
		printf("%d", a % 2);
	}
}
/*
	printBin(11), printBin(11/2), 1
	printBin(5), printBin(5/2),	  1
	printBin(2), printBin(2/2),   0
	printBin(1),				  1		//�ݺ� ����

	�Ʒ����� ���� ǥ�� - 1011
*/
int main()
{
	int x = 11;

	printBin(x); //1011

	return 0;
}