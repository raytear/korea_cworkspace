#include <stdio.h>

/*
	변수 - 프로그램에서 데이터를 저장하는 메모리 공간
	자료형 - 한 문자(char), 정수(int), 실수(double)
*/

/*
	문자
	char alper = 'A' - 1개의 문자(홑따옴표) - 1Byte
	char[] alper = "abc" - 여러개의 문자(쌍따옴표)
*/

/*
	숫자(정수)
	short - 2Byte
	int - 4Byte
	long - 4Byte
	long long - 8Byte
*/
int main()
{
	//변수 선언 방법 - 자료형 변수이름
	int n1; //정수형 변수 선언
	n1 = 5; //값을 저장(초기화, 할당) //=은 대입 연산자, ==이 '같다'

	int n2 = 100; //선언과 동시에 초기화

	//메모리의 주소 [&(엠퍼샌드) - 주소연산자]
	//'\t'(tab)은 한 칸 띄우기, '\n'은 줄바꿈
	printf("%d\t %x\n", n1, &n1);
	printf("%d\t %x\n", n2, &n2);

	printf("두 수의 합: %d\n", n1 + n2);
	printf("두 수의 차: %d\n", n1 - n2);

	//실수형 변수 선언, 서식문자 - %lf(long float)
	double rateOfBirth = 0.75;

	printf("대한민국의 2024년 출산율은 %.2lf입니다.\n", rateOfBirth);

	//문자형 변수 선언
	char grade = 'A';

	printf("그 호텔의 서비스는 %c등급이다.\n", grade);

	//문자열 배열[대괄호] 선언
	char nameOfFruit[] = "사과";

	printf("그 과일의 이름은 %s입니다.\n", nameOfFruit);

	//변수 이름은 의미가 있게 만들고, 카멜 표기법 사용

	/*  변수 이름 작성시 오류
		int 2n = 20;   //숫자로 시작 안됨
		int a ge = 25; //공백(문자) 불가
		int for = 3;   //예약어(제공된 명령어) 사용 불가
    */

	//자료형의 크기 - sizeof()
	printf("\n=== 자료형의 크기 ===\n");
	printf("int형 %dByte\n", sizeof(n1));
	printf("double형 %dByte\n", sizeof(rateOfBirth));
	printf("char형 %dByte\n", sizeof(grade));
	printf("문자열 배열형 %dByte\n", sizeof(nameOfFruit));

	return 0;
}