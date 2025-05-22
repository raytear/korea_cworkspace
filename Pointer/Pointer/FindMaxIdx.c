#include <stdio.h>

/*
	- 배열에서 최대값의 위치 찾기
	- 포인터 배열에서 최대값의 위치 찾기
*/
int findMaxIdx2(int*, int);
int findMaxIdx(int[], int);
int main()
{
	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int maxIdx1, maxIdx2;

	maxIdx1 = findMaxIdx(arr, 6);	 //배열과 개수를 전달함
	maxIdx2 = findMaxIdx2(arr, 6);  //&arr[0]

	printf("최대값: %d, %d\n", maxIdx1, maxIdx2);


	return 0;
}

int findMaxIdx(int a[], int len)
{
	int maxIdx, i;
	maxIdx = 0;	//첫번째 위치로 설정
	for (i = 0; i < len; i++) {
		if (a[i] > a[maxIdx])	//a[maxIdx]와 비교
			maxIdx = i;
	}
	return maxIdx;
}

int findMaxIdx2(int* a, int len)
{
	int maxIdx, i;
	maxIdx = 0;
	for (i = 0; i < len; i++) {
		if (*(a + i) > *(a + maxIdx))
			maxIdx = i;
	}
	return maxIdx;
}