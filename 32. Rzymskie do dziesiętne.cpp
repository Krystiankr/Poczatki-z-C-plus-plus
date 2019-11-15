#include<iostream>
#include<sstream>
using namespace std;
int zamiana(char x) {
	if (x == 'I') return 1;
	else if (x == 'X')
		return 10;
	else if (x == 'M')
		return 1000;
	else if (x == 'L')
		return 50;
	else if (x == 'C')
		return 100;
	else if (x == 'D')
		return 500;
	else if (x == 'V')
		return 5;

	return 2;
}
int main() {
	string liczba, a;
	while (cin >> noskipws>>liczba) {
		int licznik = 0;
		istringstream iss(liczba);
		iss.seekg(0);
		iss >> noskipws >> a;
		if (a[0] == '\n' or a[0] == '\0') { cout << "0"; }
		else {
			licznik += zamiana(liczba[liczba.length() - 1]);
			for (int i = liczba.length() - 2; i >= 0; i--) {
				if (zamiana(liczba[liczba.length() - 2 - i]) >= zamiana(liczba[liczba.length() - 1 - i]))
					licznik += zamiana(liczba[liczba.length() - 2 - i]);
				else licznik -= zamiana(liczba[liczba.length() - 2 - i]);
			}
			cout << licznik << '\n';
		}
	}
}
