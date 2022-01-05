#include <iostream>

using namespace std;

int main() {
	int a(10);
	int &p = a; //레퍼런스 변수 p선언
	p = 5;

	int b(2);
	int c(3);

	swap(b, c);

	cout << p << endl;
	cout << a << endl;
	cout << b << ' ' << c << endl;
}

void swap(int &a, int &b) {//레퍼런스 변수를 사용하여 함수의 매개변수를 받아온 경우
	int tmp = a;
	b = a;
	b = tmp;
}