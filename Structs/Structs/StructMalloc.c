#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	����ü �迭�� ���� �Ҵ�(������)
*/

typedef struct {
	int id;			//��� ���̵�
	char name[20];	//�̸�
	int salary;		//�޿�
}Employee;

//���� ��� �Լ� ����
void displayInfo(Employee* e, int len) { //�Ű������� ����ü ������ ����
	for (int i = 0; i < len; i++) {
		printf("��� ID: %d, �̸�: %s, �޿�: %d\n", (e + i)->id,
			(e + i)->name, (e + i)->salary);
	}
}

int main()
{
	//����ü �迭 ���� �Ҵ�
	Employee* emp;
	emp = (Employee *)malloc(sizeof(Employee) * 3);
	if (emp == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	//printf("%d\n", sizeof(emp)); //8byte

	//��� 1�� ����
	emp->id = 1001; //������ ������ ȭ��ǥ �����ڷ� ������
	strcpy(emp->name, "�����");
	emp->salary = 2000000;

	//��� 2�� ����
	(emp + 1)->id = 1002;
	strcpy((emp + 1)->name, "�ڴ븮");
	(emp + 1)->salary = 3000000;

	//��� 3�� ����
	(emp + 2)->id = 1003;
	strcpy((emp + 2)->name, "�Ѱ���");
	(emp + 2)->salary = 4000000;

	//���� ���
	displayInfo(emp, 3);	
	
	free(emp);

	return 0;
}