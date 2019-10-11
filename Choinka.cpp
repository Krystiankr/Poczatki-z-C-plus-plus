#include<iostream>
using namespace std;
int main() {
	int ilosc = 3;
	int powtarzalnosc = 1;
	for (; powtarzalnosc > 0; --powtarzalnosc) {
		for (int i = 0; i < ilosc; ++i) {
			for (int j = 0; j <= ilosc - 3 - i + powtarzalnosc ; ++j) {
				cout << " ";
			}
			for (int j = 0; j <= 0 + 2 * i; ++j) {
				cout << "*";
			}cout << endl;
		}ilosc += 1;
	}
}
