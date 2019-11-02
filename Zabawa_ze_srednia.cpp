#include<iostream>
using namespace std;
int main() {
//fajnie 33min za 1 siadło
	int wejscie,liczba;
	cin >> wejscie;
	//cin >> wejscie;
	for (int i = 0; i < wejscie; i++) {
		//cin >> liczba;
		cin >> liczba;
		int *array = new int[liczba * 2];
		for (int j = 0; j < liczba * 2; j++) {
			cin >> array[j];
		}

		int srednia = 0;
		for (int j = 0; j < liczba; j++) {
			srednia += array[j * 2+1];
		}
		srednia = srednia / liczba;
		cout << endl;
		for (int j = 0; j < liczba; j++) {
			//wszystko ponizej sredniej
			if (array[j * 2+1] <= srednia) {
				cout << array[j * 2] << " " << array[j * 2+1]<<" ";
			}
		}
		cout << endl;
		for (int j = 0; j < liczba; j++) {
			//wszystko ponizej sredniej
			if (array[j * 2 + 1] > srednia) {
				cout << array[j * 2] << " " << array[j * 2+1]<<" " ;
			}
		}cout << endl;
		delete[] array;
	}
}
