#include<iostream>

int& function(int& a) {
	a = 5;
	return a;
}
int main() {
	int b = 2;
	int c = function(b);
	return 0;
}
/*#include <iostream>
int function() {
int a = 5;
return a;
}
int main() {
const int& c = function();  상수레퍼런스로 값을 리턴받으면 리턴값의 생명이 연장됨.
std::cout << "c : " << c << std::endl;
return 0;
}
*/