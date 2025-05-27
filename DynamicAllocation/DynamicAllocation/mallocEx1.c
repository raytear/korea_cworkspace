#include <stdio.h> 
#include <stdlib.h> //malloc(), free() ���

/*
	�����͸� ����� ���� �Ҵ�
	- ���α׷��� ����(run time)�Ǵ� ���ȿ� �޸� ����ϰ� ����(�ݳ�)��
*/

int main()
{
	//ũ�Ⱑ 4�� ������ �迭 ���� - ���� �Ҵ�
	//�޸� ���� - ����(stack) ����
	/*
	int n[4];
	
	n[0] = 1;
	n[1] = 2;
	*/

	//�����͸� Ȱ���� ���� �Ҵ� - ��(heap) ����
	int* pn = (int *)malloc(sizeof(int) * 4); //16byte
	if (pn == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); //���α׷� ����
	}

	pn[0] = 10;
	pn[1] = 20;
	pn[2] = 30;
	pn[3] = 40;

	/*for (int i = 0; i < 4; i++) {
		printf("%d ", pn[i]);
	}*/

	printf("%d %d\n", pn[0], *(pn + 0));
	printf("%d %d\n", pn[1], *(pn + 1));

	//�� ����
	*pn = 50;
	*(pn + 1) = 60;
	*(pn + 2) = 70;
	*(pn + 3) = 80;

	for (int i = 0; i < 4; i++) {
		printf("%d ", *(pn + i));
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		printf("%d ", pn[i]);
	}
	

	free(pn); //�޸� ����

	return 0;
}