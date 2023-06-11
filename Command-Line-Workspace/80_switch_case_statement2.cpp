/*
 * Author: Matt Johnson
 * Subject: switch-case statements
 * Purpose:
 * Date: 06/11/2023
 *
 * Requirements:
 *
 * 	Use enumeration
 */

#include <iostream>

using namespace std;

int main(void) {

	enum Direction {
		left, right, up, down
	};

	Direction heading {left};

	switch (heading) {
		case left:
			cout << "Going left" << endl;
			break;
		case right:
			cout << "Going right" << endl;
			break;
		case up:
			cout << "Going up" << endl;
			break;
		case down:
			cout << "Going down" << endl;
			break;
		default:
			cout << "OK" << endl;
	}

	cout << endl;
	return 0;
}
