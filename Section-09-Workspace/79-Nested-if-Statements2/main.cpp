/*
 *  Author: Matt Johnson
 *  Subject: nested if statement
 *  Purpose: executes nested if statements
 *  Date: 06/10/2023
 * 
 *  Requirements:
 * 
 *          Shipping cost calculator
 * 
 *          Ask the user for package dimension in inches
 *          length, width, height - these should be integers
 *          
 *          All dimensions must be 10 inches or less or we
 *          cannot ship it
 * 
 *          Base cost $2.50
 *          If package volume is greater than 100 cubic inches,
 *          there is a 10% surcharge
 *          If package volume is greater than 500 cubic inches,
 *          there is a 25% surcharge
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    
    int length {}, width {}, height {};
    double base_cost {2.50};
    
    const int tier1_threshold {100};    // volume
    const int tier2_threshold {200};    // volume
    
    int max_dimension_length {10};  // inches
    
    double tier1_surcharge {0.10};  // 10% extra
    double tier2_surcharge {0.25};  // 25% extra
    
    // All dimensions must be 10 inches or less
    
    int package_volume {};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected - dimensions exceeded" << endl;
    } else {
        double package_cost {};
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "\nadding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "\nadding tier 1 surcharge" << endl;
        }
        
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << " inches" << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
    }
    
    cout << endl;
    return 0;
}
