/*
 *  Author: Matt Johnson
 *  Subject: nested if statement
 *  Purpose: executes nested if statements
 *  Date: 06/10/2023
 */

#include <iostream>

using namespace std;

int main(void) {
    
    int score {};
    cout << "Enter your score on the exam between 0 and 100: ";
    cin >> score;
    
    char letter_grade {};
    if (score >= 0 && score <= 100) {
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
        
        cout << "\nYour grade is: " << letter_grade << endl;
        if (letter_grade == 'F')
            cout << "Sorry, you must repeat this class" << endl;
        else
            cout << "Congrats! That's a passing grade!" << endl;
    } else {
        cout << "Sorry, " << score << " is not in range" << endl;
    }
    
    cout << endl;
    return 0;
}
