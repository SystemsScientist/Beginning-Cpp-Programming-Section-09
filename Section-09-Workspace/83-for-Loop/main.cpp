/*
 *  Author: Matt Johnson
 *  Subject: for loop
 *  Purpose: 
 *  Date: 06/12/2023
 * 
 *  Requirements:
 * 
 *                 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    
    cout << "for loop increments by 1: " << endl;
    for (int i {1}; i <= 10; ++i)
        cout << i << endl;
    
    cout << "\nfor loop increments by 2: " << endl;
    for (int i {1}; i <= 10; i += 2)
        cout << i << endl;
    
    cout << "\nfor loop decrements by 1: " << endl;
    for (int i {10}; i > 0; --i)
        cout << i << endl;
    cout << "Blastoff!" << endl;
    
    cout << "\nfor loop increments by 10: " << endl;
    for (int i {10}; i <= 100; i += 10) {
        cout << i << endl;
    }
    
    cout << "\nfor loop prints integers divisible by 15: " << endl;
    for (int i {10}; i <= 100; i += 10) {
        if (i % 15 == 0)
            cout << i << endl;
    }
    
    cout << "\nfor loop adds two integers: " << endl;
    for (int i {1}, j {5}; i <= 5; ++i, ++j)
        cout << i << " + " << j << " = " << (i + j) << endl;
    
    cout << "\nfor loop prints rows of ten integers: " << endl;
    for (int i {1}; i <= 100; ++i) {
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }
    
    cout << "\nfor loop prints rows of ten integers: " << endl;
    for (int i {1}; i <= 100; ++i) {
        cout << i;
        cout << ((i % 10 == 0) ? "\n" : " ");
    }
    
    vector <int> nums {10, 20, 30, 40, 50};
    
    cout << "\nfor loop prints a vector of numbers: " << endl;
    for (unsigned i {0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    
    cout << endl;
    return 0;
}
