#include<iostream>
using namespace std;
// kod jest dobry ale na stos nie działa
int main() {
	int o;
	cin >> o;
	for (int m = 0; m < o; m++)
	{
		int a, b;
		int c, d;
		cin >> a >> b;
		int **arr = (int **)malloc(a * sizeof(int *));
		for (int i = 0; i < a; i++)
			arr[i] = (int *)malloc(b * sizeof(int));
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> arr[i][j];
			}
		}
		cin >> c >> d;
		int **arrx = (int **)malloc(c * sizeof(int *));
		for (int i = 0; i < c; i++)
			arrx[i] = (int *)malloc(d * sizeof(int));
		for (int i = 0; i < c; i++) {
			for (int j = 0; j < d; j++) {
				cin >> arrx[i][j];
			}
		}
		int **tablep = (int **)malloc(a * sizeof(int *));
		for (int i = 0; i < c; i++)
			tablep[i] = (int *)malloc(d * sizeof(int));
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < d; j++) {
				tablep[i][j] = 0;
			}
		}

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < d; k++) {
				for (int i = 0; i < c; i++) {
					tablep[j][k] += arr[j][i] * arrx[i][k];//blad jakis
				}
			}
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < d; j++) {
				cout << tablep[i][j] << " ";
			}cout << endl;
		}
		free(*arr);
		free(*arrx);
		free(*tablep);


	}
	return 0;
}
