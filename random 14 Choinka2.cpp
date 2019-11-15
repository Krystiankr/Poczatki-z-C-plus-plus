#include<iostream>
using namespace std;
int main() {
	int a = 7,l=2;
	for (int k = 0; k <= l; ++k) {
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < a - i - 1+l-k; ++j) {
				cout << " ";
			}
			for (int j = 0; j < 1 + 2 * i; ++j) {
				cout << "*";
			}cout << endl;
		}a += 1;
	}
}
