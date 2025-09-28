// ------------- FILE HEADER -------------
// Author : Scott "Eridatus"
// Assignment : 1
// Date : 9/26
// Citations: cpp.sh for build + tests
// Main.cpp file for double checks
// CoPilot AI for answering very specific questions
// Things like what's causing errors or how to fix a wonky line of code

#include <iostream>
using namespace std;

int main() {
    // list input info
    int employee_id = 0;
    int hours_worked = 0;
    int usd_per_hour = 0;
    int fed_withhold_percent = 0;

    // output info
    int gross_pay_usd = 0;
    double fed_tax_withhold_usd = 0.0;
    double net_pay_usd = 0.0;

    cout << "Welcome to the Weekly Payroll Program.\n";

    // collect user numbers here
    cout << "Enter your employee ID number: ";
    cin >> employee_id;

    cout << "Enter your hours worked: ";
    cin >> hours_worked;

    cout << "Enter your hourly payrate: ";
    cin >> usd_per_hour;

    cout << "Enter the federal withholding rate: ";
    cin >> fed_withhold_percent;

    // smart computer math stuff
    gross_pay_usd = hours_worked * usd_per_hour;
    double decimal_withhold_percentage = fed_withhold_percent / 100.0;
    // i think i did it right?
    fed_tax_withhold_usd = gross_pay_usd * decimal_withhold_percentage;
    net_pay_usd = gross_pay_usd - fed_tax_withhold_usd;

    // hope and prayers
    cout << "Here is your payroll summary:\n";
    cout << "Total gross pay $ " << gross_pay_usd << endl;
    cout << "Tax withholding $ " << fed_tax_withhold_usd << endl;
    cout << "Net pay $ " << net_pay_usd << endl;
    cout << "Thank you for using the Weekly Payroll Program.\n";

    return 0;
}


// datus.data