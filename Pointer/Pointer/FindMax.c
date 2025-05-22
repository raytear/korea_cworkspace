#include <stdio.h>
/*
	1. 배열에서 최대값 찾기
	2. 포인터 배열에서 최대값 찾기
*/

int findMax(int[], int);
int findMax2(int*, int);
int main()
{
	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int max1, max2;

	max1 = findMax(arr, 6);	 //배열과 개수를 전달함
	max2 = findMax2(arr, 6); //&arr[0]

	printf("최대값: %d\n", max1);
	printf("최대값: %d\n", max2);

	return 0;
}

int findMax2(int* a, int len)
{
	int maxVal, i;
	maxVal = *(a + 0);	//*a (역참조로 값 확인)
	for (i = 0; i < len; i++) {
		if (*(a + i) > maxVal)
			maxVal = *(a + i);
	}
	return maxVal;
}

int findMax(int a[], int len)
{
	int maxVal, i;

	maxVal = a[0]; //최대값 설정
	for (i = 0; i < len; i++) {
		if (a[i] > maxVal)
			maxVal = a[i];
	}

	return maxVal;	//최대값 반환
}