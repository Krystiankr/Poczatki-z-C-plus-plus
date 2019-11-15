#include<iostream>
using namespace std;
//5:40 min
int main(){
	int liczbaG;
	cin >> liczbaG;
	for (int j = 0; j < liczbaG; j++) {
		int liczba;
		cin >> liczba;
		int *array = new int[liczba];
		for (int i = 0; i < liczba; i++) {
			cin >> array[i];
		}
		for (int i = 0; i < liczba; i++) {
			if (array[i] % 2 == 0) {
				cout << array[i]<<" ";
			}
		}
		for (int i = 0; i < liczba; i++) {
			if (array[i] % 2 != 0) {
				cout << array[i]<<" ";
			}
		}
		cout << endl;
		delete[] array;
	}
	
}
