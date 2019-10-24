#include<iostream>
#define Rozmiar 5
using namespace std;
/*Przykład 2. Złożenie dwóch tablic Program pobiera dwie tablice a następnie stworzy
trzecią, która zawierać będzie elementy z pierwszej i drugiej tablicy umieszczone na
zmianę.*/
int main() {
	int tablica1[Rozmiar] = { 9,8,9,8,9 };
	int tablica2[Rozmiar] = { 1,2,3,5,6 };
	int tablica3[2* Rozmiar];
	for (int i = 0; i < Rozmiar; i++) {
		tablica3[2 * i] = tablica1[i];
	}
	for (int i = 0; i < Rozmiar; i++) {
		tablica3[1+2 * i] = tablica2[i];
	}
	for (int i = 0; i < 2* Rozmiar; i++) { cout << " " << tablica3[i];
	}
}
