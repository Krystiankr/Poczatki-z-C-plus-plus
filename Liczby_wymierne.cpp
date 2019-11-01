#include<sstream>
#include<iostream>
#include<string>
using namespace std;
// 5 godzin walki z tym zadaniem
int min(int x, int y) {
	if (x > y) return y;
	else return x;
}
int max(int x, int y) {
	if (x < y) return y;
	else return x;
}
int NWD(int x, int y) {
	int zmienna = 1;
	if (x < 0 and y < 0)
		x *= (-1), y *= (-1);
	int x0=x, x00=y;
	if (x < 0)
		x *= (-1);
	if (y < 0)
		y *= (-1);
	for (int i = 2; i <= min(x, y); i++) {
		if ((min(x, y) / i) * i == min(x, y)) {
			if (max(x, y) % i == 0)
			{
				x = x0;
				y = x00;
				zmienna = -1;
				return i;
			}
		}
	}
	if (zmienna == 1)return 1;
	return 0;
}
struct Dzialania {
	string zmienna;
	int wartosc1;
	int wartosc2;
	string dzialaniex;
};
int mnozenie(int x, int y) {
	return x * y;
}
int dodawanie(int x1, int x2, int y1, int y2, int z) {
	if (z == 0 and x2 == y2) {
		return x1 + y1;
	}
	else if (z == 0 and x2 != y2) {
		return x1 * y2 + x2 * y1;
	}
	else if (z == 1 and x2 == y2) {
		return x2;
	}
	else if (z == 1 and x2 != y2) {
		return x2 * y2;
	}
	return 0;
}
int odejmowanie(int x1, int x2, int y1, int y2, int z) {
	if (z == 0 and x2 == y2) {
		return x1 - y1;
	}
	else if (z == 0 and x2 != y2) {
		return x1 * y2 - x2 * y1;
	}
	else if (z == 1 and x2 == y2) {
		return x2;
	}
	else if (z == 1 and x2 != y2) {
		return x2 * y2;
	}
	return 0;
}
void NWDFINALLY(int x, int y, int*x1, int*x2) {

	while (NWD(x, y) != 1) {
		int x5 = NWD(x, y);
		x /= x5;
		y /= x5;
	}
	if (x < 0 and y < 0) {
		x *= (-1), y *= (-1);
	}
	if (x > 0 and y < 0) {
		x *= (-1), y *= (-1);
	}
	if (x == 0) {
		*x1 = x;
		*x2 = 1;
	}
	else {
		*x1 = x;
		*x2 = y;
	}
}
int main() {
	char sprawdzam;
	int xd, xy;
	string wejscie1;
	Dzialania liczba1, liczba2, dzialanie;
	while (cin >> sprawdzam, !cin.fail()) {
		if (sprawdzam == 'A') {
			cin >> wejscie1;
			string x1, x2;
			int i = 0;
			while (wejscie1[i] != '/') {
				x1 += wejscie1[i++];
			}
			for (size_t j = i + 1; j < wejscie1.length(); j++) {
				x2 += wejscie1[j];
			}
			istringstream iss1(x1), iss2(x2);
			iss1 >> liczba1.wartosc1, iss2 >> liczba1.wartosc2;
			cin >> sprawdzam;
		}
		
		if (sprawdzam == 'B') {
			cin >> wejscie1;
			string x1, x2;
			int i = 0;
			while (wejscie1[i] != '/') {
				x1 += wejscie1[i++];
			}
			for (size_t j = i + 1; j < wejscie1.length(); j++) {
				x2 += wejscie1[j];
			}
			istringstream iss1(x1), iss2(x2);
			iss1 >> liczba2.wartosc1, iss2 >> liczba2.wartosc2;
			cin >> sprawdzam;
		}
		dzialanie.dzialaniex = sprawdzam;
		if (dzialanie.dzialaniex == "+") {
			NWDFINALLY(dodawanie(liczba1.wartosc1, liczba1.wartosc2, liczba2.wartosc1, liczba2.wartosc2, 0), dodawanie(liczba1.wartosc1, liczba1.wartosc2, liczba2.wartosc1, liczba2.wartosc2, 1), &xd, &xy);
			cout << xd << "/" << xy;
		}
		else if (dzialanie.dzialaniex == "-") {
			NWDFINALLY(odejmowanie(liczba1.wartosc1, liczba1.wartosc2, liczba2.wartosc1, liczba2.wartosc2, 0), odejmowanie(liczba1.wartosc1, liczba1.wartosc2, liczba2.wartosc1, liczba2.wartosc2, 1), &xd, &xy);
			cout << xd << "/" << xy;
		}
		else if (dzialanie.dzialaniex == "*") {
			NWDFINALLY(mnozenie(liczba1.wartosc1, liczba2.wartosc1), mnozenie(liczba1.wartosc2, liczba2.wartosc2), &xd, &xy);
			cout << xd << "/" << xy;

		}
		else if (dzialanie.dzialaniex == "/") {
			NWDFINALLY(mnozenie(liczba1.wartosc1, liczba2.wartosc2), mnozenie(liczba1.wartosc2, liczba2.wartosc1), &xd, &xy);
			cout << xd << "/" << xy;
		}
		cout << endl;
	}
}
