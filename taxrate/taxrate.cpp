#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// number storage
    double itemCost = 0.0;
        double totalCost =0.0;
            double taxCost = 0.0;
                
                    const double taxNum = 0.0875;

                    // run sequence starts here
                        cout << "Welcome to the Tax Calculator.\n";
                            cout << "Enter the cost of the item: ";
                                cin >> itemCost;

                                    taxCost = itemCost * taxNum;
                                        totalCost = itemCost + taxCost;

                                            cout << fixed << setprecision(2);
                                            // final display should use 2 decimal places
                                                cout << "This item costs: $" << itemCost << " without tax.\n";
                                                    cout << "The tax price on this item is: $" << taxCost << endl;
                                                        cout << "This item costs: $" << totalCost << " with tax.\n";
                                                            cout << "Thank you for using the tax calculator.\n";
                                                                cout << "Goodbye.";
                                                                }