/*
 *  Author: Matt Johnson
 *  Subject: Section Challenge Solution
 *  Purpose: 
 *  Date: 06/18/2023
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void) {
    
    char choice {};
    vector <int> data;
    
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
            cout << "List of values " << endl;
            for (long unsigned int i = 0; i < data.size(); i++)
                cout << data[i] << " ";
            cout << endl;
        } else if (choice == 'A' || choice == 'a') {
            int data_item {};
            cout << "Add a number greater than zero: ";
            cin >> data_item;
            data.push_back(data_item);
        } else if (choice == 'M' || choice == 'm') {
            cout << "Mean of the inputted values is " << endl;
        } else if (choice == 'S' || choice == 's') {
            cout << "Smallest number is " << *min_element(data.begin(), data.end()) << endl;
        } else if (choice == 'L' || choice == 'l') {
            cout << "Largest number is " <<  *max_element(data.begin(), data.end()) << endl;
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
