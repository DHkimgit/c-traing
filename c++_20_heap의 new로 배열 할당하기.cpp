/*new �� �迭 �Ҵ��ϱ�*/
#include<iostream>

int main() {
	int array_size;
	std::cout << "array size : ";
	std::cin >> array_size;

	int* list = new int[array_size];

	for (int i=0; i < array_size; i++) { //for�� �ʱ�Ŀ� ���ǵ� i�� for�� ���ο��� ���ǵ� ���̹Ƿ� �ܺο��� ����� �� ����. �̷��� i�� �����ϸ� �ܺο��� i�� �ٸ� �뵵�� ����ϴ��� ī���� ó�� �ǹǷ� ���� ������ �����ϴ�.
		std::cin >> list[i];
	}

	for (int i=0; i < array_size; i++) {
		std::cout << i << "th element of the list : "<< list[i] << std::endl;
	}

	delete[] list; //new[] �� �����ϰ� delete[]�� �����ϴ� ����

	return 0;
}
// �ݺ��� ���� i�� ���� 0���� �ʱ�ȭ ���ִ� ���� �����