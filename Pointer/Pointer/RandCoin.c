#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>	//time()

/*
	동전 던지기 게임
	- 동전을 던진다.
	- 사용자가 답을 입력
	- 사용자와 동전이 같으면 "맞았음", 다르면 "꽝!"을 출력
	- 1, 2가 아닌 다른 값을 입력하면 종료
*/

int main()
{
	int coin;	//컴퓨터의 난수
	int you;	//사용자

	//문자 여러개
	//char aspect[][10] = {"앞면", "뒷면"};
	char* aspect[] = { "", "앞면", "뒷면" }; //문자 여러개

	//printf("%s\n", aspect[1]);
	srand(time(NULL));	//시드값을 현재 시간으로 자동 변화

	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요\n");
	while (1) {
		coin = rand() % 2 + 1;	//1 ~ 2
		printf("동전을 던졌습니다. 앞면? 뒷면? : ");
		scanf_s("%d", &you);	//사용자 입력

		if (you < 1 || you > 2) {
			printf("게임을 종료합니다.\n");
			break;
		}
		else {
			printf("사용자: %s, 동전: %s\n", aspect[you], aspect[coin]);
			//조건 연산자 활용
			//printf("%s\n", (you == coin) ? "맞았음" : "꽝!");
			if (you == coin)
				printf("맞았음\n");
			else
				printf("꽝!\n");
		}
	}

	return 0;
}