#include <iostream>
using namespace std;

int main() {

	int x, i, s = 0;

	cout << "Please, enter the value: ";
	cin >> x;

	cout << "All numbers by which this number is divisible without remainder: " << " " << endl;

	for (i = 0; i < x; i++) {

		s = s + 1;

		if (x % s == 0) {

			cout << s << " ";
		}

	}

	cout << endl;


	return 0;
}