#include <stdio.h>

typedef struct {
	int number; //�й�
}Student;

int main()
{
	Student s[10]; //����ü �迭 10��
	int i;

	for (i = 0; i < 10; i++) {
		s[i].number = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}
	printf("\n");

	s[1].number = 0; //2�� �л� ����(����)

	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}

	//������ �濡�� �������� �̵�
	for (i = 1; i < 9; i++) {
		s[i].number = s[i + 1].number;
	}
	s[9].number = 0;
	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}

	return 0;
}