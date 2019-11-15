/*Proszę napisać program, który będzie wykonywać podstawowe operacje arytmetyczne (+,-,*./,%) na liczbach dowolnej długości.*/
//+ 18 3
#include<iostream>
using namespace std;

long long int dodawanie(long long x, long long y) {
	return x + y;
}
long long int mnozenie(long long x, long long y) {
	return x * y;
}
long long int odejmowanie(long long x, long long y) {
	return x - y;
}

long long int dzielenie(long long x, long long y) {
	return x / y;
}

long long int modulo(long long x, long long y) {
	return x % y;
}
 


int main() {
	char dzialanie;
	long long liczba1, liczba2;
	while (cin >> dzialanie >> liczba1 >> liczba2, !cin.fail()) {
		if (dzialanie == '+') cout<<dodawanie(liczba1, liczba2);
		if (dzialanie == '/') cout<<dzielenie(liczba1, liczba2);
		if (dzialanie == '*') cout<<mnozenie(liczba1, liczba2);
		if (dzialanie == '%') cout<<modulo(liczba1, liczba2);
		if (dzialanie == '-') cout<<odejmowanie(liczba1, liczba2);
		cout << endl;
	}
	
}
