/*
 * Author: Matt Johnson
 * Subject: coding exercise 13
 * Purpose: program prints day of the week
 * Date: 06/14/2023
 *
 * Requirements:
 *
 */

#include <iostream>

using namespace std;

int main(void) {

	int day_code {4};

	switch (day_code) {
		case 0:
			cout << "Sunday\n";
			break;
		case 1:
			cout << "Monday\n";
			break;
		case 2:
			cout << "Tuesday\n";
			break;
		case 3:
			cout << "Wednesday\n";
			break;
		case 4:
			cout << "Thor's day. \"Yes!\"\n";
			break;
		case 5:
			cout << "Friday\n";
			break;
		case 6:
			cout << "Saturday\n";
			break;
		default:
			cout << "Error - illegal day code";
	}

	cout << endl;
	return 0;
}
