#include <iostream>

using namespace std;

int main() {
	int a(10);
	int &p = a; //���۷��� ���� p����
	p = 5;

	int b(2);
	int c(3);

	swap(b, c);

	cout << p << endl;
	cout << a << endl;
	cout << b << ' ' << c << endl;
}

void swap(int &a, int &b) {//���۷��� ������ ����Ͽ� �Լ��� �Ű������� �޾ƿ� ���
	int tmp = a;
	b = a;
	b = tmp;
}