/* �Լ��� �����ε� */
#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

//c++���� �Լ��� �̸��� ������ ���ڰ� �ٸ��� �ٸ� �Լ��� �ν��Ѵ�.
//�ڱ�� ��Ȯ�� ��ġ�ϴ� ���ڸ� ���� �Լ��� ���ٸ� '�ڽŰ� �ִ�� ������ �Լ�'�� ã�� �ȴ�.
/* ��Ȯ�� ��ġ�ϴ� ��찡 ���� ���
 Char, unsigned char, short �� int �� ��ȯ�ȴ�.
 Unsigned short �� int �� ũ�⿡ ���� int Ȥ�� unsigned int �� ��ȯ�ȴ�.
 Float �� double �� ��ȯ�ȴ�.
 Enum �� int �� ��ȯ�ȴ�. */
/* ��ȯ�ص� ��ġ�ϴ� ���� ���� ���
 ������ ����(numeric) Ÿ���� �ٸ� ���� Ÿ������ ��ȯ�ȴ�. (���� ��� float -> int)
 Enum �� ������ ���� Ÿ������ ��ȯ�ȴ� (���� ��� Enum -> double)
 0 �� ������ Ÿ���̳� ���� Ÿ������ ��ȯ�� 0 �� ������ Ÿ���̳� ���� Ÿ������ ��ȯ�ȴ�
 �����ʹ� void �����ͷ� ��ȯ�ȴ�.
*/

int main() {
	int a = 1;
	char b = 'c';
	double c = 3.2f;
	print(a);
	print(b);
	print(c);
	return 0;
}
