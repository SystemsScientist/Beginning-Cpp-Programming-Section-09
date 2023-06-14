/*
 * Author: Matt Johnson
 * Subject: for loop
 * Purpose: program prints integers 10 through 1
 * Date: 06/13/2023
 *
 * Requirements:
 *
 * 	1. print message for user
 * 	2. decrement for loop by 2
 * 	3. print integers 10 through 1
 */

#include <iostream>

using namespace std;

int main(void) {

	cout << "for loop decrements by 2: " << endl;
	for (int i{10}; i > 0; i -= 2)
		cout << "==> " << i << endl;

	cout << endl;
	return 0;
}
