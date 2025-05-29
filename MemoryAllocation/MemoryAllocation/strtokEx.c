#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
	strtok(���ڿ�, ���б�ȣ) - ���ڿ��� ���б�ȣ�� �߶�
	- �����ͷ� ���ڸ� ��ȯ��
	- �и��� ���ڸ� �迭�� ������ �� ����
*/

#define MAX_WORDS 10 //���ڿ�(�ܾ�)�� �ִ� ����
int main() 
{
	char words[] = "ant bear chicken horse pig";
	char* wordList[MAX_WORDS]; //�и��� ���ڸ� �迭�� ����
	int idxOfWord = 0; //�迭�� �ε���

	/*
	//ù��° ���ڿ�(�ܾ�) �и�
	char* ptr = strtok(words, " "); //�������� ����
	printf("ù° ���: %s\n", ptr); //ant
	wordList[idxOfWord++] = ptr;

	ptr = strtok(NULL, " "); //ant ���� '0'�� ����Ŵ
	printf("��° ���: %s\n", ptr); //bear
	wordList[idxOfWord++] = ptr;

	printf("%s\n", wordList[0]); //ant
	printf("%s\n", wordList[1]); //bear
	*/

	char* ptr = strtok(words, " ");
	while (ptr != NULL) {
		wordList[idxOfWord++] = ptr;
		ptr = strtok(NULL, " ");
	}

	//��ü ���
	for (int i = 0; i < idxOfWord; i++) {
		printf("%s\n", wordList[i]);
	}
	printf("\n");

	//�����ϰ� ����
	srand(time(NULL));

	int rndIdx = rand() % idxOfWord;
	printf("%s\n", wordList[rndIdx]);

	return 0;
}