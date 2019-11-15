#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double t1[3], t2[3];
	for (int i = 0; i < 3; i++)
		cin >> t1[i];
	for (int i = 0; i < 3; i++)
		cin >> t2[i];
	if (abs(t1[2] - t2[2]) < sqrt((t1[0] - t2[0]) *(t1[0] - t2[0]) + (t1[1] - t2[1]) *(t1[1] - t2[1])) and sqrt((t1[0] - t2[0]) *(t1[0] - t2[0]) + (t1[1] - t2[1]) *(t1[1] - t2[1])) < t1[2] + t2[2])
		cout << 'T';
	else cout << 'F';
}
