#include <stdio.h>
/*
	2���� �迭 - ���ڿ�
*/
int main()
{
	//���ڿ� �迭 ����
	/*
	char greet[] = "hello";

	printf("%s\n", greet);
	*/

	//2���� �迭 - words[�ܾ��� ����][�ִ� ������ ��]
	char words[][10] =
	{
		"sun",
		"moon",
		"earth",
		"flower"
	};
	int i, j;

	//Ư�� �ܾ� ��ȸ
	printf("%s\n", words[0]);
	printf("%s\n", words[3]);

	//��ü ��ȸ - ���ڿ��� ���
	int size = sizeof(words) / sizeof(words[0]); //�迭�� ũ��
	printf("%d %d\n", sizeof(words), sizeof(words[0]));

	for (i = 0; i < size; i++)
	{
		printf("%s\n", words[i]);
	}
	printf("\n");

	//���ڷ� ���
	for (i = 0; i < size; i++)
	{
		for (j = 0; words[i][j] != NULL; j++)
		{
			printf("%c", words[i][j]);
		}
		printf("\n");
	}

	return 0;
}