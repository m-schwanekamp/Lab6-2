//Lab6-2
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
	int n;
	int r;
	int c;
	int tri;

	// enter a number
	cout << "Enter number of asterisks: ";
	cin >> n;
	tri = n - 1;

	for (r = 1; r <= n; r++) {
		for (c = 1; c <= tri; c++) 
			cout << " ";
		tri--;
		for (c = 1; c <= (2 * r - 1); c++) 
			cout << "*";
		cout << endl;
	}
	tri = 1;
	for (r = 1; r <= n - 1; r++) {
		for (c = 1; c <= tri; c++)
			cout << " ";
		tri++;
		for (c = 1; c <= (2 * (n - r) - 1); c++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	return 0;
}