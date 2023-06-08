/*
 * Author: Matt Johnson
 * Subject: if statement
 * Purpose: executes if statements
 * Date: 06/08/2023
 */

#include <iostream>

using namespace std;

int main(void) {

	int num {0};
	const int min {10};
	const int max {100};

	cout << "Enter a number between " << min << " and " << max << ": ";
	cin >> num;

	if (num >= 10) {
		cout << "\n========== if Statement 1 ==========" << endl;
		cout << num << " is greater than or equal to " << min << endl;

		int diff {num - min};
		cout << num << " is " << diff << " greater than " << min << endl;
	}

	if (num <= 100) {
		cout << "\n========== if Statement 2 ==========" << endl;
		cout << num << " is less than or equal to " << max << endl;

		int diff {max - num};
		cout << num << " is " << diff << " less than " << max << endl;
	}

	if (num >= min && num <= max) {
		cout << "\n========== if Statement 3 ==========" << endl;
		cout << num << " is in range between " << min << " and " << max << endl;
		cout << "This means statements 1 and 2 must also display!!!" << endl;
	}

	if (num == min || num == max) {
		cout << "\n========== if Statement 4 ==========" << endl;
		cout << num << " is right on a boundary" << endl;
		cout << "This means all statements display!!!" << endl;
	}

	cout << endl;
	return 0;
}
