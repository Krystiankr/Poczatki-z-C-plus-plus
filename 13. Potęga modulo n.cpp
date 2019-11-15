#include<iostream>
using namespace std;

int modulo(long long a, long long b, long long n) {
	long long x = 1, y = a;
	while (b > 0) {
		if (b % 2 == 1) {
			x = (x*y) % n; 
		}
		y = (y*y) % n; 
		b /= 2;
	}
	return x % n;
}

int main() {
	long long a, b, c;
	while (cin >> a >> b >> c, !cin.fail()) {
		cout << modulo(a, b, c)<<endl;
	}
}
