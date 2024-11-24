#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
using namespace std;

int main()
{
	// TASK 7.1 
	const int r = 5;
	double B[r] = { 2.2, 3.1, -3.6, 0.1, 2.1 };
	int counter = 0;

	for (int i = 0; i < r; i++) {
		if (B[i] < 0.99) {
			counter++;
		}
	}

	cout << "Result: " << counter << endl;

	// TASK 7.2 

	const int r2 = 7;
	double A[r2] = { -3.2, 0, 3.1, 0, 0, 1.2, 3.0 };

	for (int j = 0; j < r2; j++) {
		if (A[j] == 0) {
			A[j] += sqrt(75 + j / 75 - j);
		}
	}

	for (int k = 0; k < r2; k++) {
		cout << A[k] << " ";
	}

	cout << endl;
	// TASK 7.3 

	vector<int> array = { 3, -1, 0, 2, -3, 0, -7, 8 };
	int n = array.size();
	int lastZeroIndex = -1;

	for (int i = 0; i < n; i++) {
		if (array[i] == 0) {
			lastZeroIndex = i;
		}
	}

	if (lastZeroIndex == -1 || lastZeroIndex == n - 1) {
		cout << "No elements after the last zero" << endl;
	}
	else {
		int minElement = numeric_limits<int>::max();
		for (int i = lastZeroIndex + 1; i < n; i++) {
			if (abs(array[i]) < abs(minElement)) {
				minElement = array[i];
			}
		}
		cout << "Minimum absolute value after the last zero: " << minElement << endl;
	}
}
