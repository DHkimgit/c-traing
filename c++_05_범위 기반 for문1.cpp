// ���� ��� for��
#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int n : arr) { //for �� ���ο��� n�� ���� �ٲ� ������� �ʴ´�.
		cout << n << ' ';
		n++; //������� �ʴ� ����
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
}