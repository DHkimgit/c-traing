//over load 함수 오버로드
#include<iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}
void swap(int* (&a), int* (&b)) {//int *(&a)의 의미는 int형 포인터를 가르키는 레퍼런스 변수이다,
	int *tmp = a;
	a = b;
	b = tmp;
}
// 함수 3개의 이름이 동일하다. 함수에 제공된 매개변수의 자료형에 따라 알아서 알맞는 함수를 실행시켜 준다. 오버로드 기능.
int main() {
	int a = 20, b = 30;
	double da = 2.22, db = 3.333;

	int *pa = &a, *pb = &b;

	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
}