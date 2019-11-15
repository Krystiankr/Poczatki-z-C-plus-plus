#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, !cin.fail()) {
		int zmienna = 0;
		for (int i = 1; i <= n; i++) {
			int pomoc = n/i;
			if (pomoc*i==n) zmienna += i;
		}
		if (zmienna  == 2*n)
			cout << zmienna << " P" << endl;
		else cout << zmienna<<endl;
	}
}
