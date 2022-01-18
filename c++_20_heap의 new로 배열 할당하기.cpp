/*new 로 배열 할당하기*/
#include<iostream>

int main() {
	int array_size;
	std::cout << "array size : ";
	std::cin >> array_size;

	int* list = new int[array_size];

	for (int i=0; i < array_size; i++) { //for문 초기식에 정의된 i는 for문 내부에서 정의된 것이므로 외부에서 사용할 수 없다. 이렇게 i를 정의하면 외부에서 i를 다른 용도로 사용하더라도 카운터 처리 되므로 오류 방지에 유리하다.
		std::cin >> list[i];
	}

	for (int i=0; i < array_size; i++) {
		std::cout << i << "th element of the list : "<< list[i] << std::endl;
	}

	delete[] list; //new[] 로 정의하고 delete[]로 삭제하는 구조

	return 0;
}
// 반복문 속의 i의 값을 0으로 초기화 해주는 것을 까먹음