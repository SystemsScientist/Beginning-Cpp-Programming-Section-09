/*
 * Author: Matt Johnson
 * Subject: range-based for loop
 * Purpose: 
 * Date: 06/16/2023
 *
 * Requirements:
 *
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(void) {

	int scores[] {10, 20, 30};

	cout << "Range-based for loop prints integers of 10 (using int): " << endl;
	for (int score: scores)
		cout << "==> " << score << endl;

	cout << "\nRange-based for loop prints integers of 10 (using auto): " << endl;
	for (auto score: scores)
		cout << "==> " << score << endl;
	
	vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
	double average_temp {};
	double running_total {};

	for (auto temp: temperatures)
		running_total += temp;

	if (temperatures.size() != 0)
		average_temp = running_total / temperatures.size();

	cout << fixed << setprecision(1);
	cout << "\nAverage temperature is " << average_temp << endl;

	cout << "\nRange-based loop prints integers: " << endl;
	for (auto val: {1, 2, 3, 4, 5})
		cout << "==> " << val << endl;

	cout << "\nRange-based loop prints a string: " << endl;
	for (auto c: "This is a test")
		cout << c;

	cout << "\nRange-based loop prints a string: " << endl;
	for (auto c: "This is a test")
		if (c != ' ')
			cout << c;

	cout << "\nRange-based loop prints a string: " << endl;
	for (auto c: "This is a test")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;

	cout << endl;
	return 0;
}
