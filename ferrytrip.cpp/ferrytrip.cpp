#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    const double vehicleFee = 57.90;
    const double adultFee = 14.95;
    const double seniorFee = 7.40;
    const double youthFee = 5.55;
    const double bikeFee = 4.00;
    const double rewardNum = 100.00;

    char hasVehicle;
    int numAdults = 0, numSeniors = 0, numYouth = 0, numBikes = 0;
    double total = 0.0;

    cout << "Fare description & Ticket cost:\n";
    cout << "Vehicle Under 14' (less than 168\") & Driver = $57.90\n";
    cout << "Adult (age 19 - 64) = $14.95\n";
    cout << "Senior (age 65 & over) / Disability = $7.40\n";
    cout << "Youth (age 6 - 18) = $5.55\n";
    cout << "Bicycle Surcharge (included with Vehicle) = $4.00\n\n";
// i would make it format the info in the nice way like the example but
// its almost 11pm and this is already a day late
// ive been coding for 8+ hours today
// help

    cout << "Do you have a vehicle (y/n)? ";
    cin >> hasVehicle;
    hasVehicle = tolower(hasVehicle);

    if (hasVehicle != 'y' && hasVehicle != 'n') {
        cout << "Error: Invalid vehicle response. Program ending.\n";
        return 1;
    }

    if (hasVehicle == 'y') {
        total += vehicleFee;
    } else {
        cout << "Enter number of bikes: ";
        cin >> numBikes;
        if (numBikes < 0 || numBikes > 20) {
            cout << "Error: Invalid number or over 20 bikes. Program ending.\n";
            return 1;
        }
        total += numBikes * bikeFee;
    }

    cout << "Enter number of adults (age 19 - 64): ";
    cin >> numAdults;
    cout << "Enter number of seniors (age 65 & over) / disability: ";
    cin >> numSeniors;
    cout << "Enter number of youth (age 6 - 18): ";
    cin >> numYouth;

    if (numAdults < 0 || numSeniors < 0 || numYouth < 0 ||
        (numAdults + numSeniors + numYouth) > 20) {
        cout << "Error: Invalid number or over 20 passengers. Program ending.\n";
        return 1;
// i honestly dont even know how did this work
// surely theres a less insane way to do this
    }

    total += numAdults * adultFee;
    total += numSeniors * seniorFee;
    total += numYouth * youthFee;

    cout << fixed << setprecision(2);
    cout << "\nTotal fare: $" << total << endl;

    if (total > rewardNum) {
        cout << "Congratulations! You earned a free adult ticket for your next trip.\n";
    } else {
        double difference = rewardNum - total;
        cout << "Spend $" << difference << " more to earn a free adult ticket next time.\n";
    }
// this shit is so unoptimized but it works so fuck it
    return 0;
}

// datus.data