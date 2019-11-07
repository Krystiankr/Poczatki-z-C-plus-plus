#include<iostream>
using namespace std;
int main() {
	int wejscie;
	cin >> wejscie;
	int *array = new int[wejscie];
	for (int i = 0; i < wejscie; i++) {
		cin >> array[i];
	}
	for (int i = 2; i <= 19; i++) {
		cout << i << " ";
		for (int j = 0; j < wejscie; j++) {
			if (array[j] % i == 0) {
				cout << array[j]<<" ";
			}
		}
		cout << endl;
	}
	delete[] array;
}
