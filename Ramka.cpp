#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int k = 0; k < b; k++) {
			if (i == 0 or i == 1 or i == a-1 or i == a-2 or k==0 or k==b-1 or k==1 or k==b-2) {
				if ((i + k) % 2 == 0) {
					cout << "x";
				}
				else { cout << "."; }
			}
			else {cout << "."; }
		}cout << endl;
	}
}
