#include<iostream>
#include<string>
// stos nie działa mi tak
using namespace std;
int main() {
	int x,b=1;
	while (cin >> x, !cin.fail()) {
		if (x == 2)b = 0;
		else if (x % 2 == 0) b = 1;
		else {
			for (int i = 3; i <= x-1; i = i + 2) {
				if (x%i == 0) {
					b = 1;
					break;
				}
				b = 0;
			}
		}
		if (b == 0) {
			cout << "TAK\n";
		}
		else cout << "NIE\n";
	}
}
