#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    const int SLICES_PER_PIZZA = 8;
    const double TAX_RATE = 0.07;
    const double DELIVERY_RATE = 0.20;

    int partyCount = 0;
    int totalPizzas = 0;
    int maxPeople = 0;
    double maxTotalCost = 0.0;

    char runAgain;

    do {
        int people;
        double avgSlices, pizzaCost;
// i dont like this input format
// robert its pissing me off
        cout << "Enter number of people, average slices per person, and cost of one pizza: ";
        cin >> people >> avgSlices >> pizzaCost;

        double totalSlices = people * avgSlices;
        int pizzasNeeded = static_cast<int>(ceil(totalSlices / SLICES_PER_PIZZA));
        double cost = pizzasNeeded * pizzaCost;
        double tax = cost * TAX_RATE;
        double delivery = (cost + tax) * DELIVERY_RATE;
        double total = cost + tax + delivery;

        cout << fixed << setprecision(2);
        cout << "Pizzas needed: " << pizzasNeeded << endl;
        cout << "Cost: $" << cost << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Delivery: $" << delivery << endl;
        cout << "Total: $" << total << endl;

        partyCount++;
        totalPizzas += pizzasNeeded;
        if (people > maxPeople) maxPeople = people;
        if (total > maxTotalCost) maxTotalCost = total;

        cout << "Would you like to run the program again? (y/n): ";
        cin >> runAgain;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (runAgain == 'y' || runAgain == 'Y');

    // Final summary
    cout << fixed << setprecision(1);
    cout << "\nNumber of party entries: " << partyCount << endl;
    cout << "Total number of pizzas: " << totalPizzas << endl;
    if (partyCount > 0) {
        cout << "Average number of pizzas: " << static_cast<double>(totalPizzas) / partyCount << endl;
        cout << "Maximum number of people at a party: " << maxPeople << endl;
        cout << fixed << setprecision(2);
        cout << "Maximum total cost: $" << maxTotalCost << endl;
    }
    cout << "Goodbye!" << endl;
// im about to crash out bro
    return 0;
}

// datus.data