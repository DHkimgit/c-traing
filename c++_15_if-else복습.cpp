#include <iostream>

int main() {
	int user_input;
	int system_answer = 3;
	while (1) {
		std::cout << "���Ͻô� ���� �Է��ϼ��� : " ;
		std::cin >> user_input;
		if (user_input == system_answer) {
			std::cout << "���� !" << std::endl;
			break;
		}
		else
			std::cout << "�ٽ� ������ ������ ~" << std::endl;
	}
	return 0;
}