#include<iostream>

int inventory[64] = {};
int score = 0;

using namespace std;

void getitem(int itemid) {
	inventory[itemid]++;
}

void getitem(int itemid, int cnt) {
	inventory[itemid] += cnt;
}

void getitem(int itemid, int cnt, int sc) {
	inventory[itemid] += cnt;
	score += sc;
}
/*void getitem(int itemid, int cnt = 1, int sc = 0) {
	inventory[itemid] += cnt;
	score += sc;
	디폴트 매개변수를 사용한 경우. cnt와 sc값이 입력되지 않은 경우에는 자동으로 각각 1과 0이 채워진다.
	디폴트 매개변수는 오른쪽부터 채워넣어야 한다.
}*/

int main() {
	getitem(2);
	getitem(6, 23);
	getitem(11, 3, 3000);

	for (int i = 0; i < 17; i++) {
		cout << inventory[i] << " ";
	}
	cout << endl;
	cout << score << " ";
}