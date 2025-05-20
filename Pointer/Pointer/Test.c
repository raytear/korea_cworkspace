#include <stdio.h>

int main()
{
	int a = 10;
	int* b;
	
	printf("a의 값은 %d\n", a);	//10

	b = &a;
	*b = 20;

	printf("b의 값은 %d\n", *b); //20
	printf("a의 값은 %d\n", a);	//20

	return 0;
}