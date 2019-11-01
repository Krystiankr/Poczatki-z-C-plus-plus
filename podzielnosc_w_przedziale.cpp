#include<iostream>
using namespace std;
//8min
int main() {
	int a, b, c;
	while (cin >> a >> b >> c, !cin.fail()) {
		int d = 0;
		int *array = new int[b - a + 1];
		for (int i = 0; i <= (b - a); i++) {
			if ((a + i) % c == 0) {
				array[d] = (a + i);
				d++;
			}
		}
		for (int i = 0; i < d; i++) {
			cout << array[i] << endl;
		}
		delete[] array;
	}
}
