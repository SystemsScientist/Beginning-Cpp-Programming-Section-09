/*
 * Author: Matt Johnson
 * Subject: nested loops
 * Purpose: program prints a multiplication table
 * Date: 06/20/2023
 *
 * Requirements:
 *
 */

#include <iostream>

using namespace std;

int main(void) {

	for (int num1 {1}; num1 <= 10; ++num1) {
		for (int num2 {1}; num2 <= 10; ++num2) {
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		}
		cout << "---------------------" << endl;
	}

	cout << endl;
	return 0;
}
