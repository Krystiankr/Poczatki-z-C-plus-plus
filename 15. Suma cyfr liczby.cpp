#include<iostream>
using namespace std;
int funkcja1(int x, int y) {
	int c = 1;
	if (y == 0) return 1;
	while (y != 0) {	
		c *= x;
		y -= 1;
	}
	return c;
}
int funkcja(int x) {
	int suma=0;
	for (int i = 1; x != 0; i++) {
		suma += (x%funkcja1(10, i)) / (funkcja1(10, i - 1));
		x = x - (x % (funkcja1(10, i)));
	}
	return suma;
}
int main() {
	int liczba;
	cin >> liczba;
	int *array = new int[liczba*2];
	for (int i = 0; i < liczba; i++) {
		cin >> array[i*2] >> array[i*2+1];
		cout << array[i*2 + 1] * array[i*2]<<" "<< funkcja(array[i * 2 + 1] * array[i * 2]) << endl;
	}
	delete[] array;
}
