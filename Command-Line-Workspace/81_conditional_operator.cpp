/*
 * Author: Matt Johnson
 * Subject: conditional operator
 * Purpose: 
 * Date: 06/12/2023
 *
 * Requirements:
 *
 * 	Declare variable
 * 	Prompt user
 * 	Process input using if-else block
 * 	Process input using conditional operator
 */

#include <iostream>

using namespace std;

int main(void) {

	int num {};

	cout << "Enter an integer: ";
	cin >> num;

	// use if-else block
	if (num % 2 == 0)
		cout << num << " is even" << endl;
	else
		cout << num << " is odd" << endl;

	// use conditional operator
	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

	cout << endl;
	return 0;
}
