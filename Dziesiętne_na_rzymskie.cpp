#include<iostream>
using namespace std;
#include <string>
int main() {
	int n;
	while (cin >> n, !cin.fail()) {
		int b = n;
		string jeden, dwa, trzy, cztery;
		if (n%10!=0) {
			if (n % 10 == 1) jeden = "I";
			else if (n % 10 == 2) jeden = "II";
			else if (n % 10 == 3) jeden = "III";
			else if (n % 10 == 4) jeden = "IV";
			else if (n % 10 == 5) jeden = "V";
			else if (n % 10 == 6) jeden = "VI";
			else if (n % 10 == 7) jeden = "VII";
			else if (n % 10 == 8) jeden = "VIII";
			else if (n % 10 == 9) jeden = "IX";
		}
		if (n%100!=0) {
			n = (n - (n % 10)) % 100;
			if (n == 10) dwa = "X";
			else if (n == 20) dwa = "XX";
			else if (n == 30) dwa = "XXX";
			else if (n == 40) dwa = "XL";
			else if (n == 50) dwa = "L";
			else if (n == 60) dwa = "LX";
			else if (n == 70) dwa = "LXX";
			else if (n == 80) dwa = "LXXX";
			else if (n == 90) dwa = "XC";
			n = b;
		}
		if (n%1000!=0) {
			n = ((n - (n % 10)) - (n - (n % 10)) % 100) % 1000;
			if (n == 100) trzy = "C";
			else if (n == 200) trzy = "CC";
			else if (n == 300) trzy = "CCC";
			else if (n == 400) trzy = "CD";
			else if (n == 500) trzy = "D";
			else if (n == 600) trzy = "DC";
			else if (n == 700) trzy = "DCC";
			else if (n == 800) trzy = "DCCC";
			else if (n == 900) trzy = "CM";
			n = b;
		}
		n = (n - ((n - (n % 10)) % 100) - (((n - (n % 10)) - (n - (n % 10)) % 100) % 1000) - (n % 10)) % 10000;
		if (n >= 1000 and n < 4000) {
			if (n == 1000) cztery = "M";
			else if (n == 2000) cztery = "MM";
			else if (n == 3000) cztery = "MMM";
		}
		cout << cztery << trzy << dwa << jeden<<endl;
	}
}
