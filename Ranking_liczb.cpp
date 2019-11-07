#include<iostream>
using namespace std;
// 1:22 h
/* cel mam taki znalezc max mam
gdy mam max zamienic max z 1 miejscem i lece od t[0+1 zamiana next slot]

*/
double max_tablicy(double tabel[], int rozmiar) {
	double max, poczatek;
	max = tabel[rozmiar - 1];
	for (int i = 0; i < rozmiar; i++) {
		if (tabel[i] > max) {
			max = tabel[i];
			poczatek = tabel[rozmiar - 1];
			tabel[rozmiar - 1] = max;
			tabel[i] = poczatek;
		}
	}
	return max;
}
int main() {
	int wejscie;
	cin >> wejscie;
	for (int k=0; k < wejscie; k++) {
		int rozmiarx;
		cin >> rozmiarx;
		double *tablica_1 = new double[rozmiarx];
		double *tablica_2 = new double[rozmiarx];
		double *tablica_kopia = new double[rozmiarx];
		for (int l = 0; l < rozmiarx; l++) {
			cin >> tablica_1[l];
			tablica_2[l] = tablica_1[l];
			tablica_kopia[l] = tablica_1[l];
		}
		for (int i = 0; i < rozmiarx; i++) {
			tablica_kopia[i] = max_tablicy(tablica_1, rozmiarx - i);

		}

		for (int i = 0; i < rozmiarx; i++) {
			printf("%f", tablica_2[i]);
			for (int j = 0; j < rozmiarx; j++) {
				if (tablica_2[i] == tablica_kopia[j])
				{
					cout << " " << j + 1 << " "; break;
				}
			}
		}
		delete[] tablica_1;
		delete[] tablica_2;
		delete[] tablica_kopia;
		cout << endl;
	}
}
