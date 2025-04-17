#include <stdio.h>

int main()
{
	//진수 표기 - 10진수, 2진수, 16진수
	int num = 10;
	int bNum = 0b1010; //2진수는 접두어 0b를 붙임
	int hNum = 0xB;    //16진수는 접두어 0x를 붙임


	printf("%d\n", num);
	printf("%d\n", bNum);
	printf("%d\n", hNum);

	//음의 정수 표기
	//방법 - 1) 1의 보수로 바꿈, 0을 1로, 1은 0으로 바꿈
	//		 2) 1의 보수 결과에 1을 더함
	int num1 = 0b00000000000000000000000000000101; //5
	int num2 = 0b11111111111111111111111111111010; //-6
	int num3 = 0b11111111111111111111111111111011; //-5

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return 0;
}