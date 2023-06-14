/*
 *  Author: Matt Johnson
 *  Subject: coding exercise 15
 *  Purpose: program prints integers divisible by 3 or 5
 *  Date: 06/14/2023
 * 
 *  Requirements:
 * 
 *                 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    
    vector<int> vec {1, 3, 5, 15, 16, 17, 18, 19, 20, 21, 25, 26, 27, 30, 50, 55, 56, 58, 100, 200, 300, 400, 500, 600, 700};
    
    int count {0};
    
    for (auto v: vec) {
        if ((v % 3 == 0) || (v % 5 == 0))
            count += 1; // or ++count;
    }
    cout << "Number of elements in the vector divisible by 3 or 5: " << endl;
    cout << "==> " << count << endl;
    
    cout << endl;
    return 0;
}