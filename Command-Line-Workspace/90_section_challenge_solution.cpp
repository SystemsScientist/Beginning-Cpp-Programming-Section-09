

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>

using namespace std;

int main(void) {

	char choice {};
	vector<int> data;
	double running_total {};
	double mean {};

	do {
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit\n" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 'P' || choice == 'p') {
			
			if (data.size() == 0) {
				cout << "[] - the list is empty" << endl;
				cout << "Please add a number" << endl;
			} else {
				cout << "List of values" << "[ ";
				for (long unsigned i = 0; i < data.size(); i++)
					cout << data[i] << " ";
				cout << " ]";
				cout << endl;
			}
		} else if (choice == 'A' || choice == 'a') {

			int data_item {};
			cout << "Add a number greater than zero: ";
			cin >> data_item;
			data.push_back(data_item);
			cout << data_item << " added" << endl;

			running_total += data_item;
			cout << "Running total " << running_total << endl;
		} else if (choice == 'M' || choice == 'm') {

			if (running_total != 0) {
				mean = running_total / static_cast<double>(data.size());
				cout << "Mean of list is " << setprecision(4) << mean << endl;
			} else {
				cout << "Unable to calculate the mean - no data" << endl;
				cout << "Please add a number" << endl;
			}
		} else if (choice == 'S' || choice == 's') {

			if (data.size() == 0)
				cout << "Please add a number" << endl;
			else
				cout << "Smallest number is " << *min_element(data.begin(), data.end()) << endl;
		} else if (choice == 'L' || choice == 'l') {

			if (data.size() == 0)
				cout << "Please add a number" << endl;
			else
				cout << "Largest number is " << *max_element(data.begin(), data.end()) << endl;
		} else if (choice == 'Q' || choice == 'q') {

			cout << "Goodbye...\n" << endl;
			break;
		} else {

			cout << "That is not an option." << endl;
			cout << "Please try again.\n" << endl;
		}	
	} while (choice != 'Q' || choice != 'q');

	cout << endl;
	return 0;
}
