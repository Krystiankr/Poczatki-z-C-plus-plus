#include<iostream>
#include<string>
// stos nie działa mi tak
using namespace std;
int main() {
	int x=1;
	while (cin >> x, !cin.fail()) {
		unsigned long long b = 1;
		for (int i = 1; i <= x; i++) {
			b *= i;
		}
		cout << b<<endl;
	}
}
