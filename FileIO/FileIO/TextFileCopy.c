#include <stdio.h>
/*
	�ؽ�Ʈ ���� �����ϱ�
*/

int main()
{
	FILE* fin, * fout;
	int input = 0; //���� �ڵ尪 ����

	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(&fout, "gugudan2.txt", "w");

	if (fin == NULL || fout == NULL) {
		perror("���� ���⿡ ������\n");
		return -1;
	}

	puts("���Ͽ� ������ ����(����)\n");

	//������ �о ����
	while (input != EOF) {
		input = fgetc(fin);
		fputc(input, fout);
	}

	fclose(fin);
	fclose(fout);

	return 0;
}