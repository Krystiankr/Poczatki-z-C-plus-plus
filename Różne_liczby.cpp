#include<iostream>
using namespace std;
int main() {
//33 min
	int liczbaG,liczba;
	cin >> liczbaG;
	for (int i = 0; i < liczbaG; i++) {
		cin >> liczba;
		int *array = new int[liczba];
		for(int j = 0; j < liczba; j++) {
			cin >> array[j];
		}
		for (int k = 0; k < liczba; k++) {
			int wyswietl = 0; 
			for (int h = 0; h < k; h++) {
				if (array[h] == array[k]) {
					wyswietl = 1;
					break;
				}
			}
			if (wyswietl == 0) {
				cout << array[k]<<" ";
			}
		}cout << endl;
		delete[] array;
	}
}
