/*
 * Author: Matt Johnson
 * Subject: for loop
 * Purpose: program print integers 1 through 10
 * Date: 06/13/2023
 *
 * Requirements:
 *
 * 	1. print message for user
 * 	2. increment for loop by 4
 * 	3. print integers 1 through 10
 */ 

#include <iostream>

using namespace std;

int main(void) {

	cout << "for loop increments by 4: " << endl;
	for (int i{1}; i <= 10; i += 4)
		cout << "==> " << i << endl;

	cout << endl;
	return 0;
}
