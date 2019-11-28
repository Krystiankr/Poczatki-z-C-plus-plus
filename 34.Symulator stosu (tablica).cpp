#include<iostream>
#include<string>
using namespace std;
// stos nie działa u mnie działa
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
				
			}ostatni_element++;
			cout << "OK" << endl;
		}
		else if (wejscie[0] == '-') {
			if (ostatni_element ==0) { cout << "Error\n"; }
			else {
				cout << tablica[ostatni_element-1] << endl;
				tablica[ostatni_element-1] = "2";
				ostatni_element--;
			}
		}
		else {
			cout << "Error\n";
		}									
	}
}
