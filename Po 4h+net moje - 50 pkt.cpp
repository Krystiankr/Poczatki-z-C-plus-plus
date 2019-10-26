#include <iostream>
using namespace std;
int main()
{
	int capacity = 0;
	cin >> capacity;
	int * array = new int[capacity];
	for (int i = 0; i < capacity; ++i)
	{
		cin >> array[i];
	}
	int a, b;
	for (int i = 0; i < (capacity - 1)/2; i++)
	{
		if (i < (capacity - 1)) {
			if ((i % 2) == 0)
			{
				if (((capacity - 1) % 2) == 0) {
					a = array[capacity - 1 - i];
					b = array[i];
					array[capacity - i - 1] = b;
					array[i] = a;
				}
				else {
					a = array[capacity - 2 - i];
					b = array[i];
					array[capacity - i - 2] = b;
					array[i] = a;
				}

			}
		}
	}
	for (int i = 0; i < capacity; i++) {
		cout << array[i];
	}
}
