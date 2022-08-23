#include <iostream>

using namespace std;

int LengthR1 = 0;
int WidthR1 = 0;
int AreaR1 = 0;

int LengthR2 = 0;
int WidthR2 = 0;
int AreaR2 = 0;

int main() {
    cout << "What is the length and width of your first rectangle?\n";
    cin >> LengthR1;
    cin >> WidthR1;
    int AreaR1 = LengthR1 * WidthR1;

    cout << "What is the length and width of your second rectangle?\n";
    cin >> LengthR2;
    cin >> WidthR2;
    int AreaR2 = LengthR2 * WidthR2;

    cout << "Area of your first rectangle with length of " << LengthR1 << " and width " << WidthR1 << " is: " << AreaR1 << endl;
    cout << "Area of your second rectangle with length of " << LengthR2 << " and width " << WidthR2 << " is: " << AreaR2 << endl;
        if (AreaR1 > AreaR2) {
            cout << "Rectangle one is larger than rectangle two with an area of " << AreaR1 << " vs " << AreaR2 << endl;
        } else if (AreaR2 > AreaR1) {
            cout << "Rectangle two is larger than rectangle one with an area of " << AreaR2 << " vs " << AreaR1 << endl;
        } else if (AreaR1 == AreaR2) {
            cout << "The rectangles are the same with an area of: " << AreaR1 << " and " << AreaR2 << endl;
        }


    return 0;
}