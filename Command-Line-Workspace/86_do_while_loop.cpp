/*
 * Author: Matt Johnson
 * Subject: do while loop
 * Purpose: program displays and executes menu options
 * Date: 06/17/2023
 *
 * Notes:
 *
 * 	
 */

#include <iostream>

using namespace std;

int main(void) {

	char selection {};

	do {
		cout << "\n------------------------------" << endl;
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q. Quit" << endl;

		cout << "\nEnter your selection: ";
		cin >> selection;

		if (selection == '1')
			cout << "You chose 1 - doing this" << endl;
		else if (selection == '2')
			cout << "You chose 2 - doing that" << endl;
		else if (selection == '3')
			cout << "You chose 3 - doing something else" << endl;
		else if (selection == 'Q' || selection == 'q')
			cout << "Goodbye..." << endl;
		else
			cout << "Unknown option. Try again" << endl;
	} while (selection != 'Q' && selection != 'q');

	cout << endl;
	return 0;
}
