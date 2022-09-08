#include <iostream>

int NumA = 0;
int NumB = 0;

using namespace std;

int main() {
    cout << "What are your numbers?" << endl;
    cin >> NumA >> NumB;

        if (NumA > NumB) {
            cout << "Higher number:" << NumA << endl;
            cout << "Lower number:" << NumB << endl;
        } else if (NumB > NumA) {
            cout << "Higher number:" << NumB << endl;
            cout << "Lower number:" << NumA << endl;
        }

    return 0;
}