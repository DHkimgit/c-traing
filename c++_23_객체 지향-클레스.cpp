#include<iostream>

class Animal {
private: //접근 지시자.아래 쓰여진 것들은 모두 객체 내에서 보호되어 있다는 의미를 가진다. 객체 밖에서 인위적으로 food, weight에 접근하는 것은 불가능 하다. 인스턴스 함수를 통해서만 가능.
	int food; //멤버 변수 정의. 
	int weight;


public: //외부에서 이용할 수 있게 한다.
	void set_animal(int _food, int _weight) {  //멤버 함수 정의
		food = _food;
		weight = _weight;
	}
	void increase_food(int inc) {   //멤버 함수 정의
		food += inc;
		weight += (inc / 3);
	}
	void veiw_stat() {   //멤버 함수 정의
		std::cout << "이 동물의 food : " << food << std::endl;
		std::cout << "이 동물의 weight : " << weight << std::endl;
	}
}; //세미콜론 주의

int main() {
	Animal animal;
	animal.set_animal(100, 50);
	animal.increase_food(30);

	animal.veiw_stat();
	return 0;
}

// 멤버 변수, 멤버 함수는 클레스 내에서 정의된 값
// 인스턴스 변수, 인스턴스 함수는 인스턴스로 생성된 객체에서 멤버 변수, 멤버 함수를 부르는 말.