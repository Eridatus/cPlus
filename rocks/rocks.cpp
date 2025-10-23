#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <vector>
#include <algorithm>
// we're allowed to use vector and algorithm right?
// i tried using the a hellish spiderweb of bools first
// but it made me wanna put my head through a wall
using namespace std;

int main() {
    string player1 = "";
    string player2 = "";
    string player3 = "";
    int rocks1 = 0;
    int rocks2 = 0;
    int rocks3 = 0;

    cout << "Welcome, Rock Collectors." << endl;
    cout << "Player 1, enter your name: ";
    getline(cin, player1);
    cout << player1 << ", how many rocks have you collected? ";
    cin >> rocks1;
    if (rocks1 < 0) {
        cout << "Error: negative rock count entered. Setting to 0.\n";
        rocks1 = 0;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Player 2, enter your name: ";
    getline(cin, player2);
    cout << player2 << ", how many rocks have you collected? ";
    cin >> rocks2;
    if (rocks2 < 0) {
        cout << "Error: negative rock count entered. Setting to 0.\n";
        rocks2 = 0;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Player 3, enter your name: ";
    getline(cin, player3);
    cout << player3 << ", how many rocks have you collected? ";
    cin >> rocks3;
    if (rocks3 < 0) {
        cout << "Error: negative rock count entered. Setting to 0.\n";
        rocks3 = 0;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    float average = (rocks1 + rocks2 + rocks3) / 3.0f;
    cout << fixed << setprecision(2);

    vector<pair<int,string>> players = {
        {rocks1, player1},
        {rocks2, player2},
        {rocks3, player3}
    };
// without vectors id cry
    sort(players.begin(), players.end(), [](const auto &l, const auto &r){
        return l.first > r.first;
    });
// these six lines used to be the most VILE bool soup imaginable
    int a = players[0].first;
    int b = players[1].first;
    int c = players[2].first;
    string nameFirst = players[0].second;
    string nameSecond = players[1].second;
    string nameThird = players[2].second;

    if (a == b && b == c) {
        cout << "\nIt's a three way tie.\n";
    } else if (a == b) {
        cout << "\nIt's a two way tie between " << nameFirst << " and " << nameSecond << ".\n";
        cout << nameThird << " collected " << c << " rocks." << endl;
    } else if (b == c) {
        cout << "\nIt's a two way tie between " << nameSecond << " and " << nameThird << ".\n";
        cout << nameFirst << " collected " << a << " rocks." << endl;
    } else {
        cout << "\nRock Collection Ranking:\n";
        cout << "First:  " << nameFirst << " with " << a << " rocks." << endl;
        cout << "Second: " << nameSecond << " with " << b << " rocks." << endl;
        cout << "Third:  " << nameThird << " with " << c << " rocks." << endl;
    }
// i actually cant believe this shit didnt implode
// i fear if i so much as look at it wrong it's gonna kill itself
    cout << "The average number of rocks collected is " << average << " rocks." << endl;
    cout << "Thank you for playing, Rock Collectors." << endl;

    return 0;
}

// datus.data