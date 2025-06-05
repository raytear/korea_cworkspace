#include <stdio.h>

/*
	���� ����Ʈ(�迭�� ������ �ڷᱸ��)
	- �ڱ� ���� ����ü : struct ���ο� ������ Ÿ���� ������ ��� ����
	- �����͸� �̿��� ��� ����� ��ȸ
*/
typedef struct {
	int data;
	struct List* next; //�ڱ� ���� ����ü
}List;

int main()
{
	List x, y, z; //����ü�� ����(���)
	//�ʱ�ȭ
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//��� ����(Linked List ����)
	x.next = &y;   //x -> y
	y.next = &z;   //y -> z
	z.next = NULL; //Z�� ������ ���(����Ʈ ��)

	//�����͸� ��� - ����Ʈ ��ȸ 
	List* p;
	p = &x; //�ʱ�ȭ

	printf("%d %x\n", x.data, p->next); //10 40eff4d8

	p = p->next;
	printf("%d %x\n", y.data, p->next); //20 40eff508

	//��� ����(y ����)
	x.next = y.next;
	y.next = NULL;

	printf("����ü y ������\n");

	//��ü ���
	for (p = &x; p != NULL; p = p->next) {
		printf("%d ", p->data);
	}

	return 0;
}