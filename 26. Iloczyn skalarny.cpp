#include<iostream>
using namespace std;
//9:30 min
int main() {
	int a, b;
	cin >> b;
	for (int j = 0; j < b; j++) {
		cin >> a;
		
		int suma = 0;
		int *array = new int[a * 2];
		for (int i = 0; i < a; i++) {
			cin >> array[i];
		}
		for (int i = 0; i < a; i++) {
			cin >> array[i + a];
		}
		for (int i = 0; i < a; i++) {
			suma += array[i] * array[i + a];
		}
		cout << suma << endl;
		delete[] array;
	}
}
