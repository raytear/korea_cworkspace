#include <stdio.h>

/*
	main() �Լ�
	- ���α׷��� �����ϴ� ���
	- return�� �ִ� �Լ�(�ü������ ��ȯ)
	- �Լ� ����
	  (��ȯ)�ڷ��� �Լ� �̸�(){}
	  void�� �� ��ȯ�ڷ����� ���� ��(return�� ����)
	- �Լ��� ��ġ
	  .main()�� �� �� ���ǵ� �Լ�
	  .main()�� �Ʒ� �� ����δ� ��, �����δ� �Ʒ��� ��ġ
*/
void sayHello();	//�����(������Ÿ��)�� ���
void sayHello2(char name[]);
int main()
{
	//�Լ� ȣ��
	sayHello();

	sayHello2("��׷�");
	sayHello2("Elsa");


	return 0;
}

//�λ��ϱ� ����� �ϴ� �Լ� ����
void sayHello()
{
	printf("�ȳ��ϼ���~\n");
}

//�̸��� �θ��� �λ��ϱ� ���
//char name[] - �Ű�����(Parameter)
void sayHello2(char name[])
{
	printf("%s��, �ȳ��ϼ���~\n", name);
}