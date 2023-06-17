/*
 * Author: Matt Johnson
 * Subject: while loop
 * Purpose: program executes while loops
 * Date: 06/17/2023
 *
 * Note:
 *
 */

#include <iostream>

using namespace std;

int main(void) {

	int num1 {};

	cout << "Enter a positive integer - start the countdown: ";
	cin >> num1;

	while (num1 > 0) {
		cout << "==> " << num1 << endl;
		--num1;
	}
	cout << "\nBlastoff!" << endl;

	/******************************/

	int num2 {};

	cout << "\nEnter a positive integer to count up to: ";
	cin >> num2;

	int i {1};
	while (num2 >= i) {
		cout << "==> " << i << endl;
		i++;
	}

	/******************************/

	int number {};

	cout << "\nEnter an integer less than 100: ";
	cin >> number;

	while (number >= 100) {
		cout << "Enter an integer less than 100: ";
		cin >> number;
	}
	cout << "Thanks!" << endl;
	
	/******************************/

	bool done {false};
	int number1 {0};

	while (!done) {
		cout << "\nEnter an integer between 1 and 5: ";
		cin >> number1;

		if (number1 <= 1 || number1 >= 5) {
			cout << "Out of range. Try again" << endl;
		} else {
			cout << "Thanks!" << endl;
			done = true;
		}
	}

	cout << endl;
	return 0;
}
