#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int arr[10];
	int i, j;
	cout << "Input 10 numbers";

	for ( i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	// 134,334,54,65,566,453,86,2
	int min = arr[0];
	int max = arr[0];

	for ( j = 0; j < 10; j++) {
		if (arr[j] < min) {
			min = arr[j];
		}
		if ((arr[j] > max)) {
			max = arr[j];
		}
	}
	cout << "Max" << max<<endl;
	cout << "min" << min;
	_getche();
	return 0;
}