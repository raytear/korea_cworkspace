#include <stdio.h>

int main()
{
	//1부터 더했을때 그 합이 100이 넘는 자연수와 합계
	int i = 1, sum = 0;

	while (1)
	{
		sum += i;
		if (sum > 100) break;
		i++;
	}
	printf("N = %d\n", i);
	printf("SUM = %d\n", sum);

	return 0;
}