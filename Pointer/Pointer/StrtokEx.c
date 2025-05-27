#define _CRT_SECURE_NO_WARNINGS //strtok() ���Ȱ��ó�� - ������ ���� ����
#include <stdio.h>
#include <string.h>	//strtok()
#include <stdlib.h> //srand(), rand()
#include <time.h>	//time()

/*
	strtok(���ڿ�, ���б�ȣ) - ���б�ȣ(, :, " ")
	���ڿ��� ���б�ȣ�� �����ؼ� �迭�� ��ȯ����
	- �迭�� ���
	- �����ϰ� ��Ҹ� ����
	- �ܺ� ������ ���ڿ��� �迭�� ���
*/
int main()
{
	char words[] = "ant bear chicken pig";
	char* wordList[4];	//�и��� �ܾ� ����� �迭
	int idxOfWords = 0;	//�迭�� �ε���
	char* ptr;

	ptr = strtok(words, " "); //words�� ���鹮�ڷ� �����ؼ� ptr�� ����(�ּ�)
	while (ptr != NULL) {
		wordList[idxOfWords++] = ptr; //wordList[0] = ant
		ptr = strtok(NULL, " ");
	}
	//printf("%s\n", wordList[0]); //ant
	//printf("%s\n", wordList[1]); //bear

	/*for (int i = 0; i < 4; i++) {
		printf("%s ", wordList[i]);
	}*/

	//�����ϰ� �ܾ� ����
	srand(time(NULL));

	int rndIdx = rand() % idxOfWords; //���� �߻�(0 ~ 3)
	printf("%s ", wordList[rndIdx]);

	//char* words2[] = { "ant", "bear", "chicken", "pig" };

	//printf("%s\n", words);
	//printf("%s\n", words2[0]); //ant
	//printf("%s\n", words2[1]); //bear


	return 0;
}