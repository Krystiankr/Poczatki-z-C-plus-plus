#include<iostream>
#include<string>
using namespace std;

unsigned long long name(int x, unsigned long long b) {
	if (x <= 1) {
		return 1;
	}
	else {
		for (int i = 1; i <= x; i++) {
			b *= i;
		}
		return b;
	}
}

int main() {
	int x=1;
	while (cin >> x, !cin.fail()) {
		unsigned long long b=1;	
		cout << name(x, b) <<endl;
	}
}
