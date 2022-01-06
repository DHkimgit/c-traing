#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int score;
	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;
	cout << "점수 입력 : ";
	cin >> score;
	cout << endl;
	cout << name << "님의 점수는 " << score << "점입니다." << endl;
}