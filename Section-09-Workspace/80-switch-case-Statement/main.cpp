/*
 *  Author: Matt Johnson
 *  Subject: switch-case statements
 *  Purpose: 
 *  Date: 06/11/2023
 * 
 *  Requirements:
 * 
 *          Ask the user what grade they expect on an exam
 *          Tell them what they need to score to get it
 */

#include <iostream>

using namespace std;

int main(void) {
    
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above. Study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80 to 89 for a B. Go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70 to 79 for an average grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmmm, you should strive for a better grade. All you need is 60 to 69." << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            
            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you didn't study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good - go study!" << endl;
            else
                cout << "Illegal choice" << endl;
            break;
        }
        default:
            cout << "Sorry, that's not a valid grade" << endl;
    }
    
    cout << endl;
    return 0;
}
