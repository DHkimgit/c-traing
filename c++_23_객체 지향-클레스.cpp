#include<iostream>

class Animal {
private: //���� ������.�Ʒ� ������ �͵��� ��� ��ü ������ ��ȣ�Ǿ� �ִٴ� �ǹ̸� ������. ��ü �ۿ��� ���������� food, weight�� �����ϴ� ���� �Ұ��� �ϴ�. �ν��Ͻ� �Լ��� ���ؼ��� ����.
	int food; //��� ���� ����. 
	int weight;


public: //�ܺο��� �̿��� �� �ְ� �Ѵ�.
	void set_animal(int _food, int _weight) {  //��� �Լ� ����
		food = _food;
		weight = _weight;
	}
	void increase_food(int inc) {   //��� �Լ� ����
		food += inc;
		weight += (inc / 3);
	}
	void veiw_stat() {   //��� �Լ� ����
		std::cout << "�� ������ food : " << food << std::endl;
		std::cout << "�� ������ weight : " << weight << std::endl;
	}
}; //�����ݷ� ����

int main() {
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.veiw_stat();
	return 0;
}

// ��� ����, ��� �Լ��� Ŭ���� ������ ���ǵ� ��
// �ν��Ͻ� ����, �ν��Ͻ� �Լ��� �ν��Ͻ��� ������ ��ü���� ��� ����, ��� �Լ��� �θ��� ��.