#include<iostream>

using namespace std;

int n;
void set() {
	::n = 10;
}

namespace kim {
	int n;
	void set() {
		kim::n = 20;
	}
}

namespace yun {
	int n;
	void set() {
		yun::n = 30;
	}
}

int main() {
	::set();
	kim::set();
	yun::set();

	cout << ::n << endl;
	cout << kim::n << endl;
	cout << yun::n << endl;
}
