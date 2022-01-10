#include <iostream>

int change_value(int& a) {
	a = 10;
	return 0;
}
int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_value(number);
	std::cout << number << std::endl;
	
}