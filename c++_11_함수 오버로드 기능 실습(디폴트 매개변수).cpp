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
	����Ʈ �Ű������� ����� ���. cnt�� sc���� �Էµ��� ���� ��쿡�� �ڵ����� ���� 1�� 0�� ä������.
	����Ʈ �Ű������� �����ʺ��� ä���־�� �Ѵ�.
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