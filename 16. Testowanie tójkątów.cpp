#include<iostream>
using namespace std;
int max(int x, int y) {
	if (x > y) return x;
	else return y;
}
int min(int x, int y) {
	if (x > y) return y;
	else return x;
}
int srednie(int x, int y, int z) {
	if		(x >= max(x, y) and x >= max(x, z) and y <= min(y, z)) return z;
	else if (x >= max(x, y) and x >= max(x, z) and z <= min(y, z)) return y;

	else if (y >= max(x, y) and y >= max(z, y) and x <= min(x, z)) return z;
	else if (y >= max(x, y) and y >= max(z, y) and z <= min(x, z)) return x;

	else if (z >= max(x, z) and z >= max(z, y) and x <= min(x, y)) return y;
	else	return x;
	
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c or a + c <= b or b + c <= a)cout << "ERROR";	
	else
		if (max(max(a, b), max(b, c))*max(max(a, b), max(b, c)) > (srednie(a, b, c)*srednie(a, b, c)) + (min(min(a, b), min(b, c))*min(min(a, b), min(b, c))))
			cout << "0";
		else if (max(max(a, b), max(b, c))*max(max(a, b), max(b, c)) < (srednie(a, b, c)*srednie(a, b, c)) + (min(min(a, b), min(b, c))*min(min(a, b), min(b, c))))
			cout << "1";
}
