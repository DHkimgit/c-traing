// 범위 기반 for문
#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int &n : arr) { //변수 n을 레퍼런스 변수로 선언한다.
		cout << n << ' ';
		n+=10; //n을 레퍼런스 변수로 선언했으므로 연산이 적용될 것이다.
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
}