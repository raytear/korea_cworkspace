//배열 길이가 5인 정수 배열을 선언하고, 1~10중 홀수만을 배열에 저장한 후 그 합과 평균을 계산하세요.

#include <stdio.h>

int main()
{
	int a[10];
	int i;
	int oddTotal = 0;

	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 1;
		oddTotal += a[i]; //oddTotal = oddTotal + a[i];
		printf("a[%d] = %d, oddTotal = %d\n", i, a[i], oddTotal);
	}
	printf("합계: %d\n", oddTotal);

	return 0;
}