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
const int& c = function();  ������۷����� ���� ���Ϲ����� ���ϰ��� ������ �����.
std::cout << "c : " << c << std::endl;
return 0;
}
*/