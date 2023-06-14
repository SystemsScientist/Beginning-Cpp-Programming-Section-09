/*
 * Author: Matt Johnson
 * Subject: for loop
 * Purpose: program prints numbers 1 through 10
 * Date: 06/13/2023
 *
 * Requirements:
 *
 * 	1. print message for user
 * 	2. increment for loop by 1
 * 	3. print integers 1 through 10 
 */

#include <iostream>

using namespace std;

int main(void) {

	cout << "for loop increments by 1: " << endl;
	for (int i {1}; i <= 10; ++i)
		cout << i << endl;

	cout << endl;
	return 0;
}
