#include <stdio.h>
/*
	ť(Queue) �ڷᱸ��
	- �迭���� ���� �� ��Ҹ� ���� ����
	- �� ��(rear)���� ��� ����, 
	- �� ��(front)���� ��� ����
	- front: ù �ε���, rear: ���ε���
*/

#define MAX_LEN 10

int queue[MAX_LEN];	//������ �迭 queue ����
int front = 0;		//�迭�� ù �ε���
int rear = 0;		//�迭�� �� �ε���

void enQueue(int x) {
	queue[rear] = x;
	printf("%d ", queue[rear]);
	rear++;
}

int deQueue() {
	if (front == rear) {
		printf("ť�� ������ϴ�.\n");
		return 0;
	}
	return queue[front++];
}

int main()
{
	printf("ť ������� �ڷ� ����(�ֱ�)\n");
	enQueue(10);
	enQueue(20);
	enQueue(30);
	printf("\n");

	printf("ť ������� �ڷ� ����(����)\n");
	printf("%d ", deQueue()); //10
	printf("%d ", deQueue()); //20
	printf("%d ", deQueue()); //30
	printf("%d ", deQueue()); //ť�� ������ϴ�. 0

	return 0;
}