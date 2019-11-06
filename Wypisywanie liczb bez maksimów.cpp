#include<iostream>
using namespace std;
//36min
int main() {
	int wejscie;
	cin >> wejscie;
	int start = 0;
	int to=-1;
	int zmiana=0;
	int *array = new int[wejscie];
	for (int i = 0; i < wejscie; i++) {
		cin >> array[i];
	}
	for (int j = 0; j < wejscie; j++) {
		for (int i = 0; i < wejscie; i++) {
			if (array[i] > start and array[i] >= 0) {
				start = array[i];
				to = i;
			}
		}
			for (int i = 0; i < wejscie; i++) {
				if (array[i] < start and array[i] >= 0 and zmiana!=start) {
					cout <<array[i]<<" ";
				}
			}if (zmiana != start) { cout << endl; } if (start == 0)break; zmiana = start; start = 0; if (to != -1) { array[to] = -1; }
		

	}delete[] array;
}
