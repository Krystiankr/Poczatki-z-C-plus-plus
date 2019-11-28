#include<iostream>
#include<string>
// stos nie działa mi tak
using namespace std;

int pierwsza(int x) {
	if (x % 2 == 0)x = 0;
	for (int i = 3; i <= x - 1; i = i + 2) {
		if (x%i == 0) {
			x = 0;
			break;
		}
	}
	if (x != 0)return x;
	return 0;
}

int main() {
	int ilosc;
	int tablica[100] = {};
	int a, b;
	cin >> ilosc;
	for (int g = 0; g < ilosc; g++) {
		cin >> a >> b;
		int k = 0;
		for (int i = a; i <= b; i++)
			if (pierwsza(i) != 0) tablica[k++] = pierwsza(i);
		for (int i = 0; i < k - 1; i++) {
			if (tablica[i + 1] - tablica[i] == 2)cout << "(" << tablica[i] << "," << tablica[i + 1] << ")";
		}cout << endl;
	}
}
