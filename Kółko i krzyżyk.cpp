#include<iostream>
using namespace std;

int wykonaj(char x, int y,char a[],char *k) {
	a[y] = x;
	*k = x;
	return x;
}

int sprawdz_wygrana(char t[],char x) {
	if (t[0] == x && t[1] == x && t[2] == x or
		t[3] == x && t[4] == x && t[5] == x or
		t[6] == x && t[7] == x && t[8] == x or
		t[0] == x && t[3] == x && t[6] == x or
		t[1] == x && t[4] == x && t[7] == x or
		t[2] == x && t[5] == x && t[8] == x or
		t[6] == x && t[7] == x && t[8] == x or
		t[0] == x && t[4] == x && t[8] == x or
		t[6] == x && t[4] == x && t[2] == x) return 1;
	return 0;
}

void wypisz_tablice(char a[]) {
	for (int i = 1; i <= 9; i++) i%3 ? cout << a[i-1]<<' ': cout<< a[i-1]<<endl;
}

int wolne_miejsce(char a[]) {
	int x=0;
	for (int i = 0; i < 9; i++) {
		if(a[i]=='0') x++;
	}
	return x;
}

int main() {
	char array[9]={
		'0','0','0',
		'0','0','0',
		'0','0','0'
	};
	wypisz_tablice(array);
	char ostatni_ruch = '0';
	while (wolne_miejsce(array) && not(sprawdz_wygrana(array, 'X')) && not(sprawdz_wygrana(array, 'O'))) {
		char ruch;
		int pozycja;
		cin >> ruch >> pozycja;
		(array[pozycja-1] == '0' and ruch != ostatni_ruch ? true : false) ? wykonaj(ruch, pozycja - 1, array,&ostatni_ruch) :printf("sprobuj pownownie\n");
		wypisz_tablice(array);
		if (sprawdz_wygrana(array, 'X')) cout << "Wygral X\n";
		if (sprawdz_wygrana(array, 'O')) cout << "Wygral O\n";
	}
}
