#include <stdio.h>
/*
	������ ������ ����
*/

int main()
{
	char c = 'A';
	char* pc;

	pc = &c;

	printf("������ ��: %c\n", c);
	printf("������ �޸� �ּ�: %x\n", &c);

	printf("�������� ��: %x\n", pc);
	printf("�����Ͱ� ����Ű�� ��: %c\n", *pc);

	//�ڷ����� ũ��
	printf("%dbyte %dbyte\n", sizeof(c), sizeof(pc));

	//������ ������ ���
	char c1 = 'B';
	char* c2;

	printf("c1�� ��: %c\n", c1); //B

	c2 = &c1;
	*c2 = 'D'; //������ �� ����

	printf("c1�� ��: %c\n", c1); //D
	

	return 0;
}