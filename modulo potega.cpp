#include<iostream>
using namespace std;
long long funkcja(long long zmienna, long long zmienna1, long long zmienna2)
{
	unsigned long long start = 1;
	for (int i = 1; i <= zmienna1; i++)
	{
		start *= zmienna;
	}
	return (start % zmienna2);
}
int main()
{
	unsigned long long a, n, m;
	
	while (cin >> a >> n >> m, !cin.fail()) {
		int k = 0;
		unsigned long long start = 1;
		for (unsigned long long i = 1; i <= n; i++)
		{
			start *= a;
			start = start % m;
			if (i != 1 and start == 1 and (i*2<n))
			{
				cout << funkcja(a, (n%i), m) << endl;
				k = 1;
				break;
			}
		}
		if (k==0)
			cout << start % m << endl;
	}
}
