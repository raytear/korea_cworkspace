#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <stdlib.h> //malloc(), free()
#include <string.h> //strlen()

/*
	���ڿ����� ����(����)�� ����� ���α׷�
*/

void delBlank(char[]);
int main()
{
	char a[] = "A B c D e F !";

	delBlank(a);	//ȣ��

	printf("%s\n", a);

	return 0;
}

void delBlank(char arr[])
{
	int len = strlen(arr); //'\0' ���Ե��� ����
	//arr�� ������(������) ���� �迭�� ����
	char* str = (char *)malloc(sizeof(char) * len); //char 1byte
	int k = 0; //�迭�� �ε���

	for (int i = 0; i < len; i++) {
		if (arr[i] != ' ')	//������ �ƴ� ���� ����(����)
			str[k++] = arr[i];
	}
	str[k] = '\0'; //���ڿ��� ���̹Ƿ� '\0' ����
	//arr�� str�� ����
	//strcpy(arr, str); //strcpy(������, ����)

	strcpy_s(arr, sizeof(arr), str);

	free(str);
}