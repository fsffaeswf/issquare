#include <iostream>
using namespace std;
bool isSquare(int);
int main() {
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 26;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (isSquare(arr[i]) == 1) {
			k++;
		}
	}
	cout << endl << k;
}
bool isSquare(int k) {
	int i = 0;
	while (k  >= i)
	{
		if (i*i==k) {
			return true;
		}
		i++;
	}
	
	return false;
}