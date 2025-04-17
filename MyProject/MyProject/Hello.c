#include <stdio.h>
/*
	프로그램명 : Hello~ World를 출력하는 프로그램
	작성자 : 목윤지
*/
int main()
{
	//출력 함수 - printf()
	//문장의 끝은 필수적으로 세미콜론(;)으로 끝냄.
	//'\n'(한글 글꼴일 때는 '원'표시로 뜸)은 줄바꿈 특수문자임. 영어 글꼴은 consolas체 사용
	
	//문자열 출력 - 쌍따옴표로 묶는다.
	//서식문자 - %s를 사용
	//,를 기준으로 앞에는 서식문자, 뒤에는 데이터가 옴.
	printf("Hello~ World!\n");
	printf("안녕~ 세계야!\n");
	printf("%s\n", "Hello~ World!");
	//문자 한 개 - 홑따옴표 사용
	//서식문자 - %c를 사용함
	printf("C언어 입문 학점이 %c입니다.\n", 'A');

	//숫자 - 정수(%d), 실수(%f)
	//소수점 처리 - f앞에 '.자릿수'입력
	printf("%d\n", 10);
	//printf("%f\n", 2.54); //소수 6째자리까지 나옴
	printf("%.2f\n", 2.54);

	//복사기능 'ctrl+d(duplicate)'
	printf("%d\n", 4 + 5);
	printf("%d\n", 4 - 5);
	printf("%d\n", 4 * 5);
	printf("%.1f\n", 4.0 / 5); //형변환용으로 실수로 기재. 4,5 둘 다 실수로 기재해도 됨

	return 0;
}