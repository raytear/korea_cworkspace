#include <stdio.h>

typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	//����ü ���� ����
	Hero hero1 = { 1, "����", 39 };

	//����ü ������(����) ����
	Hero hero2 = { 2, "�̼���", 54 };
	Hero* ptr = &hero2; //����ü�� �ּ� ����

	//���� �Ҵ�

	//���� ���
	printf("%d %s %d\n", hero1.no, hero1.name, hero1.age);
	printf("%d %s %d\n", ptr->no, ptr->name, ptr->age);

	return 0;
}