// 범위 기반 for문
#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int n : arr) { //for 문 내부에서 n의 값이 바뀌어도 적용되지 않는다.
		cout << n << ' ';
		n++; //적용되지 않는 연산
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
}