#include<iostream>
using namespace std;
int max(int x, int y) {
	if (x > y) return x; else return y;
}
int min(int x, int y) {
	if (x < y) return x; else return y;
}
int main() {
	int liczba;
	cin >> liczba;
	for(int i = 0; i < liczba; i++) {
		int elementy;
		cin >> elementy;
		int *array = new int[elementy];
		int pomocnicza1=0, pomocnicza2=0;
		for (int j = 0; j < elementy; j++) {
			cin >> array[j];
			if (j == 0) {
				pomocnicza1 = array[j];
				pomocnicza2 = array[j];
			}
			pomocnicza1 = max(pomocnicza1, array[j]);
			pomocnicza2 = min(pomocnicza2, array[j]);			
		}
		delete[] array;
		cout << pomocnicza2 << ' ' << pomocnicza1 << endl;
	}
}
