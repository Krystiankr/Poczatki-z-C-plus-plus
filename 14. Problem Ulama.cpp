#include<iostream>
using namespace std;

int main() {
	int liczba;
	cin >> liczba;
	int *array = new int[2*liczba];
	for (int i = 0; i < liczba; i++) { 
		cin >> array[i*2]; 
		array[1 + 2 * i] = 0;
		while (array[i*2] != 1) {
			if (array[i*2] % 2 == 0) {
				array[i*2] /= 2;
			}
			else	
				array[i*2] = 3 * array[i*2] + 1;			
			array[i*2 + 1] += 1;
		}
	}
	for (int i = 0; i < liczba; i++) {
		cout << array[1 + 2 * i] << endl;
	}
	delete[] array;
}
