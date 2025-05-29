#include <stdio.h>
#include <stdlib.h>
/*
	���ĺ� �빮�ڸ� ������ ������ �迭 26�� ���� �Ҵ�
	�޸� ���� - ��(heap) ����
*/
int main()
{
	char* pc;
	int i; //�ݺ� ����

	pc = (char*)malloc(sizeof(char) * 26); // 1 x 26 = 26
	if(pc == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); //���� ����
	}

	/*
	pc[0] = 'A' + 0; //A
	pc[1] = 'A' + 1; //B
	pc[2] = 'B' + 1; //C
	
	printf("%c %c %c\n", pc[0], pc[1], pc[2]);
	*/

	// ���ĺ� ����
	for (i = 0; i < 26; i++) {
		pc[i] = 'A' + i;
	}

	// ���
	for (i = 0; i < 26; i++) {
		printf("%c ", pc[i]);
	}
	printf("\n");

	// �������� ���� �� ���
	/*
	*pc = 'A';				//A
	*(pc + 1) = 'A' + 1;	//B
	*(pc + 2) = 'A' + 2;	//C

	printf("%c %c %c\n", *pc, *(pc + 1), *(pc + 2));
	*/

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'A' + i;
	}

	for (i = 0; i < 26; i++) {
		printf("%c ", *(pc + i));
	}
	printf("\n");
	

	free(pc); //�޸� �ݳ�

	return 0;
}