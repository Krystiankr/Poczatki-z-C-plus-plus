#include<iostream>
using namespace std;

int main()
{
	char a;
	int b, c;
	while (cin >> a >> b >> c, !cin.fail()) {
		
		
		if (a == '/') {
			if (c == 0) { cout << "ERROR"<<endl; }
			else { cout << b / c << endl; }
		}
		else if (a == '%') {
			if (c == 0) { cout << "ERROR"<<endl; }
			else { cout << b % c << endl; }
		}
		else if (a == '+') {
			cout << b + c << endl;
		}
		else if (a == '-') {
			cout << b - c << endl;
		}
		else if (a == '*') {
			cout << b * c << endl;
		}
		if (cin.fail()) { break; }
	}

}
