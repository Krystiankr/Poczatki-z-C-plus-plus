#include<iostream>
#define SIZE 11
using namespace std;
int main() {
/*	. Proszę wypełnić
tablicę dwuwymiarową znakami ’*’ i ’ ’, W taki sposób że gwiazdki tworzą duże X
*/
	int t1[SIZE] = {}, t2[SIZE] = {};
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (j==0+i or j==SIZE-i-1)
			{
				cout << "*";
			}
			else cout << " ";
		}cout << endl;
	}
}
