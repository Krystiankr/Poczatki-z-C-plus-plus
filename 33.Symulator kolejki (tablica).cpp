#include<iostream>
#include<string>
using namespace std;
//u mnie dziala na stos nie
int main() {
	string tablica[100] = {};
	int dlugosc_kolejki;
	cin >> dlugosc_kolejki;
	string wejscie;
	int ostatni_element = 0;
	while (cin >> wejscie, !cin.fail()) {
		if ((ostatni_element < dlugosc_kolejki) and wejscie[0] == '+') {
			for (size_t i = 1; i < wejscie.length(); i++) {
				tablica[ostatni_element] += wejscie[i];
			}
			cout << tablica[ostatni_element++] << endl;
		}
		else if (wejscie[0] == '-') {
			if (ostatni_element ==0) { cout << "Error\n"; }
			else {
				cout << tablica[0] << endl;
				for (int i = 0; i < ostatni_element;i++) {
					tablica[i] = tablica[i+1];

				}ostatni_element--;
			}
		}
		else {
			cout << "Error\n";
		}									
	}
}
