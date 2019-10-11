#include<iostream>
using namespace std;
int main() {
	int a = 3;//b/;
	//cin >> b;
	for (int b=3; b > 0; --b) {
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j <= a - 2 - i+b-1; ++j) {
				cout << " ";
			}
			for (int j = 0; j <= 0 + 2 * i; ++j) {
				cout << "*";
			}cout << endl;
		}a += 1;
	}
}
