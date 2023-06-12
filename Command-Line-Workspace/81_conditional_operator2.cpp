/*
 * Author: Matt Johnson
 * Subject: conditional operator
 * Purpose: 
 * Date: 06/12/2023
 *
 * Requirements
 *
 * 	Declare variables
 * 	Prompt user
 * 	Process input using conditional operator
 */

#include <iostream>

using namespace std;

int main(void) {

	int num1 {}, num2 {};

	cout << "Enter two integers separated by a space: ";
	cin >> num1 >> num2;

	if (num1 != num2) {
		cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
	} else {
		cout << "The numbers are the same " << endl;
	}

	cout << endl;
	return 0;
}
