#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <time.h>
using namespace std;
void Sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void fillArrayRandomly(int arr[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}
int main() {
	const int n = 10;
	int arr[n];
	cout << "Масив до сортування: ";
	fillArrayRandomly(arr, n);
	printArray(arr, n);
	Sort(arr, n);
	cout << "Масив після сортування: ";
	printArray(arr, n);
	return 0;
}