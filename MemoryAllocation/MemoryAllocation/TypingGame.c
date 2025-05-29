#define _CRT_SECURE_NO_WARNINGS //strtok() ���� ó��
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
	���� Ÿ�� ����
	- ���ڿ� �� �迭 : strtok()
	- ������ �ܾ� ���� : srand(), rand()
	- ����� �Է� : malloc(), free()
*/

#define MAX_WORDS 20 //�ܾ��� �ִ� ����
#define MAX_LENGTH 20 //�ܾ��� ����
int main()
{
	// 1. �ܾ� �и� �� ����
	char words[] = "ant bear chicken cow dog elephant horse monkey lion tiger";
	char* wordList[MAX_WORDS]; //�и��� �ܾ� ������ �迭
	int idxOfWords = 0;

	char* ptr = strtok(words, " ");
	while (ptr != NULL) {
		wordList[idxOfWords++] = ptr;
		ptr = strtok(NULL, " ");
	}
	
	// 2. Ÿ�� ���� �غ�
	char* question; //����
	char* answer = (char*)malloc(sizeof(char) * MAX_LENGTH); //����� �Է�
	int n = 1; //���� ��ȣ
	clock_t start, end; //����, ���� �ð�
	double elapsedTime;		//�ҿ� �ð�

	srand(time(NULL));

	printf("[Ÿ�� ����], �غ�Ǹ� ����> ");
	getchar();

	start = clock();
	while (n < 11) {
		printf("\n���� %d\n", n);
		int rndIdx = rand() % idxOfWords;
		question = wordList[rndIdx]; //������ ����
		printf("%s\n", question);

		scanf("%s", answer);	//����� �Է�
		if (strcmp(question, answer) == 0) {
			printf("���!\n");
			n++;
		}
		else {
			printf("��Ÿ! �ٽ� ����!\n");
		}
	}
	end = clock(); //���� �ð�
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�: %.2f��\n", elapsedTime);

	free(answer); //�޸� �ݳ�

	return 0;
}
