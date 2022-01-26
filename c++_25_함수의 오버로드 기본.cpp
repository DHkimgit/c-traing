/* 함수의 오버로딩 */
#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

//c++에선 함수의 이름이 같더라도 인자가 다르면 다른 함수로 인식한다.
//자기와 정확히 일치하는 인자를 가진 함수가 없다면 '자신과 최대로 근접한 함수'를 찾게 된다.
/* 정확히 일치하는 경우가 없는 경우
 Char, unsigned char, short 는 int 로 변환된다.
 Unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int 로 변환된다.
 Float 은 double 로 변환된다.
 Enum 은 int 로 변환된다. */
/* 변환해도 일치하는 것이 없는 경우
 임의의 숫자(numeric) 타입은 다른 숫자 타입으로 변환된다. (예를 들어 float -> int)
 Enum 도 임의의 숫자 타입으로 변환된다 (예를 들어 Enum -> double)
 0 은 포인터 타입이나 숫자 타입으로 변환된 0 은 포인터 타입이나 숫자 타입으로 변환된다
 포인터는 void 포인터로 변환된다.
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
