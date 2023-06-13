/*
 * Author: Matt Johnson
 * Subject: coding exercise 14
 * Purpose: program prints sum of odd integers
 * Date: 06/13/2023
 *
 * Requirements
 *
 */

#include <iostream>

using namespace std;

int main(void) {

	int sum {0};

	for (int i {1}; i <= 15; ++i) {
		if (i % 2 != 0) {
			sum += i;
		}
	}

	cout << sum << endl;

	cout << endl;
	return 0;
}
