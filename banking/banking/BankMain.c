#include <stdio.h>

#define MAX_ACCOUNTS 2 //�ִ� ������
#define OWNER_LEN 40	 //������ ũ��

/*
	���� ���� ������Ʈ �����
	- ���� ����(BankAccount) ����ü ����
	- �޴� : ���»���, ����, ���, ���¸��, ����
*/

typedef struct {
	int ano;				//���¹�ȣ
	char owner[OWNER_LEN];	//������
	int balance;			//�ܰ�
}BankAccount;

//���� ���� - �迭 ����
BankAccount accounts[MAX_ACCOUNTS];
int idxOfAccount = 0;	//�迭�� �ε���

//���� ���� �Լ� ����
void createAccount() {

	if (idxOfAccount >= MAX_ACCOUNTS) {
		printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
		return;
	}
	//�ű� ���� ����
	printf("���� ��ȣ: ");
	scanf_s("%d", &accounts[idxOfAccount].ano);
	printf("������: ");
	scanf_s("%s", accounts[idxOfAccount].owner,
		sizeof(accounts[idxOfAccount].owner));
	printf("�ܰ�: ");
	scanf_s("%d", &accounts[idxOfAccount].balance);
	idxOfAccount++; //���� �ε��� ����

	printf("���: ���°� �����Ǿ����ϴ�.\n");
}

//���� ���
void displayAccount() {
	printf("******************* ���� ��� *******************\n");

	if (idxOfAccount == 0) {
		printf("��ϵ� ���°� �����ϴ�.\n");
		return;
	}

	for (int i = 0; i < idxOfAccount; i++) {
		printf("���� ��ȣ: %d, ������: %s, �ܾ�: %d\n", accounts[i].ano,
			accounts[i].owner, accounts[i].balance);
	}
}

//����
void deposit() {
	//���� �˻� - ��ϵ� ���� �˻�
	int accountNumber;	//���� ��ȣ(�ܺ� �Է�)
	int money;			//�Աݾ�

	printf("�Ա��� ���¹�ȣ: ");
	scanf_s("%d", &accountNumber);

	//�˻� ����
	for (int i = 0; i < idxOfAccount; i++) {
		//�ܺο��� �Է��� ���¿� ��ϵ� ���¹�ȣ�� ��ġ�Ѵٸ�
		if (accounts[i].ano == accountNumber) {
			printf("�Աݾ�: ");
			scanf_s("%d", &money);

			if (money < 0) {
				printf("�ùٸ� �ݾ��� �ƴմϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
				return;
			}


			accounts[i].balance += money;
			printf("���� ó���Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
			return; //for�� ������
		}
	}//for �ݱ�
	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���
void withdraw() {
	int accountNumber;	//���� ��ȣ(�ܺ� �Է�)
	int money;			//��ݾ�

	printf("����� ���¹�ȣ: ");
	scanf_s("%d", &accountNumber);

	//�˻� ����
	for (int i = 0; i < idxOfAccount; i++) {
		//�ܺο��� �Է��� ���¿� ��ϵ� ���¹�ȣ�� ��ġ�Ѵٸ�
		if (accounts[i].ano == accountNumber) {
			printf("��ݾ�: ");
			scanf_s("%d", &money);

			if (money > accounts[i].balance || money < 0) {
				printf("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
				return; //�޴��� ��������
			}

			accounts[i].balance -= money;
			printf("���� ó���Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
			return; //for�� ������
		}
	}//for �ݱ�
	printf("���¸� ã�� �� �����ϴ�.\n");
}

int main()
{
	int choice; //�޴�

	while (1) {
		printf("==================================================\n");
		printf("1.���»��� | 2.���� | 3.��� | 4.���¸�� | 5.����\n");
		printf("==================================================\n");
		printf("���� > ");

		scanf_s("%d", &choice); //�޴� �Է�
		switch (choice) {
		case 1:
			createAccount(); break;
		case 2:
			deposit(); break;
		case 3:
			withdraw(); break;
		case 4:
			displayAccount(); break;
		case 5:
			printf("���α׷��� �����մϴ�.\n");
			return; //��� ����
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n"); break;
		}
	}//while �ݱ�

	system("pause"); //�ܼ�â ���� ���� �ذ�

	return 0;
}