#include <iostream>

using namespace std;

int main () {
    int gals = 0;
    int miles = 0;

    cout << "How many gallons does your vehicle hold on a full tank?\n";
    cin >> gals;

    cout << "How many miles can your vehicle drive on a full tank?\n";
    cin >> miles;

    int mpg = miles / gals;

    cout << "Your vehicle gets:" << mpg << " miles per gallon" << endl;


    return 0;
}