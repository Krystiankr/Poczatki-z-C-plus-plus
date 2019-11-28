#include<iostream>
#include<string>
// stos nie działa mi tak
using namespace std;

int min(int x, int y) {
	if (x > y) return y;
	else return x;
}

int NWD(int x, int y) {
	int nowa = min(x, y);
	while (x%y != 0) {
		if (x >= y) {
			x -= y;
			nowa = x;
		}
		else { y -= x; nowa = y;}
	}
	return nowa;
}

int main() {
	int x,ilosc;
	cin >> ilosc;
	for(int j=0;j<ilosc;j++){
		cin >> x;
		int *p = (int *)malloc(x * sizeof(int));
		for (int i = 0; i < x; i++) {
			cin >> p[i];
		}
		int zmiennax = NWD(p[0], p[1]);
		for (int i = 1; i < x - 1; i++) {
			if (zmiennax >= NWD(p[i], p[i + 1])) {
				zmiennax = NWD(p[i], p[i + 1]);
			}
		}
		free(p);
		cout << zmiennax << endl;;
	}
}
