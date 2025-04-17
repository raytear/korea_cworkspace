#include <stdio.h>

/*
	�ڷ����� ����
*/

int main()
{ 
	/*
		'A' - 65 (�ƽ�Ű �ڵ�)
		char : -128 ~ 127(1Byte = 8bit)
		unsigned char : 0 ~ 255(��ȣ ���� �ڷ���)
	*/
	printf("===== char �ڷ��� =====\n");
	char ch = 'A';

	printf("%c %d\n", ch, ch); //�ƽ�Ű �ڵ尪
	
	char value1 = -128;
	printf("%d\n", value1);

	char value2 = 128; //overflow
	printf("%d\n", value2);

	unsigned value3 = 128;
	//short value3 = 128; //short - 16bit(-32768 ~  32767)
	printf("%d\n", value3);

	/*
		int�� 4Byte = 32bit(-21�� ~ 21��)
		long (������ - 4Byte), (��Os - 8Byte)
		long long (8Byte)
	*/
	printf("===== int �ڷ��� =====\n");
	int iNum = 2100000000;
	printf("%d\n", iNum);

	int iNum2 = 2200000000; //���� �ʰ��� overflow
	printf("%d\n", iNum2);

	//long���� ���� �ڿ� 'L' or 'l'�� ����
	long long llNum = 2200000000L;
	printf("%lld\n", llNum);

	/*
		�Ǽ��� - �Ҽ����� �ִ� ����
		float - 4Byte, �Ҽ� 6�ڸ����� ǥ��('F' or 'f'�� ����)
		double - 8Byte, �Ҽ� 15�ڸ����� ǥ��
	*/

	printf("===== float�� double �ڷ��� =====\n");
	float fNum = 0.1234567F; //�ڸ��� �ʰ��� ����
	printf("%f\n", fNum);

	double dNum = 0.123456789012345;
	printf("%.15lf\n", dNum);

	return 0;
}