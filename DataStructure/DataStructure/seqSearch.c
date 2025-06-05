#include <stdio.h>

/*
	순차 탐색(검색) - 처음부터 끝까지 순서대로 찾음
	이진 탐색(검색) - 정렬된 데이터를 좌우 둘로 나눠서 찾는 값의 검색 범위를 좁혀가는 방법

	**가운데요소(mid) = (첫인덱스 + 끝인덱스) / 2
	- 찾을값 < 가운데요소 → 오른쪽 반을 검색범위에서 제외시킴
	- 찾을값 > 가운데요소 → 왼쪽 반을 검색범위에서 제외시킴
	- 찾을값 = 가운데요소 → 검색을 완료함
*/

int main()
{
	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;		//인덱스
	int x = 8;	//찾을 값

	printf("===== 순차 검색 =====\n");
	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d은 a[%d]에 있습니다.\n", x, i);
		}
	}

	printf("===== 이분 검색 =====\n");
	int low, high, mid;	//첫인덱스, 끝인덱스, 중간인덱스
	int val;			//검색 값

	low = 0;
	high = 8;
	val = 10;

	while (low <= high) {
		mid = (low + high) / 2; //중간 인덱스
		if (a[mid] == val) {
			break;
		}
		else if (a[mid] < val) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	
	/*
		mid = (0 + 8) / 2 = 4
		a[4] < 8, low = 5, high = 8, mid = ((5 + 8) / 2) = 6
		a[6] < 8, low = 7, high = 8, mid = ((7 + 8) / 2) = 7
		a[7] == 8, 찾음, 반복 종료
	*/

	if (a[mid] == val) {
		printf("%d은 a[%d]에 있습니다.\n", val, mid);
	}
	else {
		printf("%d는 없습니다.\n", val);
	}

	return 0;
}