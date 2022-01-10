#include <iostream>

int main() {
	int user_input;
	int system_answer = 3;
	while (1) {
		std::cout << "원하시는 수를 입력하세요 : " ;
		std::cin >> user_input;
		if (user_input == system_answer) {
			std::cout << "정답 !" << std::endl;
			break;
		}
		else
			std::cout << "다시 생각해 보세요 ~" << std::endl;
	}
	return 0;
}