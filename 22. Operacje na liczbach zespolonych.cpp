#include<iostream>
#include<string>
#include<sstream>
//czas: 52min (35min robienie+- i 20 min na szukanie błedów)
using namespace std;
struct Zespolone {
	int rzeczywiste;
	int urojone;
};
void dodawanie(int x1, int y1, int x2, int y2, int *x0, int *y0) {
	int suma1, suma2;
	suma1 = x1 + x2;
	suma2 = y1 + y2;
	*x0 = suma1;
	*y0 = suma2;
}
void odejmowanie(int x1, int y1, int x2, int y2, int *x0, int *y0) {
	int suma1, suma2;
	suma1 = x1 - x2;
	suma2 = y1 - y2;
	*x0 = suma1;
	*y0 = suma2;
}
void mnozenie(int x1, int y1, int x2, int y2, int *x0, int *y0) {
	int suma1,suma2;
	suma1 = x1 * x2 - y1 * y2;
	suma2 = x1 * y2 + x2 * y1;
	*x0 = suma1;
	*y0 = suma2;
}
int main() {
	char sprawdzam;
	Zespolone liczba1, liczba2;
	int x0, y0;
	liczba1.rzeczywiste = 0;
	liczba2.rzeczywiste = 0;
	liczba1.urojone = 0;
	liczba2.urojone = 0;
	
	while (cin >> sprawdzam, !cin.fail()) {
		if (sprawdzam == 'y') {
			string wejscie;
			cin >> wejscie;
			int i = 0;
			string licze1, licze2;
			while (wejscie[i] != '+') {
				licze1 += wejscie[i++];
			}
			while (wejscie[i + 1] != '\0') {
				licze2 += wejscie[1 + (++i)];
			}
			istringstream iss1(licze1), iss2(licze2);
			iss1 >> liczba2.rzeczywiste, iss2 >> liczba2.urojone; cin >> sprawdzam;
		}
		
		if (sprawdzam == 'x') {
			string wejscie;
			cin >> wejscie;
			int i = 0;
			string licze1, licze2;
			while (wejscie[i] != '+') {
				licze1 += wejscie[i++];
			}
			while (wejscie[i + 1] != '\0') {
				licze2 += wejscie[1 + (++i)];
			}
			istringstream iss1(licze1), iss2(licze2);
			iss1 >> liczba1.rzeczywiste, iss2 >> liczba1.urojone; cin >> sprawdzam;
		}
		if (sprawdzam == '+') {
			dodawanie(liczba1.rzeczywiste, liczba1.urojone, liczba2.rzeczywiste, liczba2.urojone, &x0, &y0);
			cout << x0 << "+i" << y0 << endl;
		}
		if (sprawdzam == '-') {
			odejmowanie(liczba1.rzeczywiste, liczba1.urojone, liczba2.rzeczywiste, liczba2.urojone, &x0, &y0);
			cout << x0 << "+i" << y0 << endl;
		}
		if (sprawdzam == '*') {
			mnozenie(liczba1.rzeczywiste, liczba1.urojone, liczba2.rzeczywiste, liczba2.urojone, &x0, &y0);
			cout << x0 << "+i" << y0 << endl;
		}
	}
}
