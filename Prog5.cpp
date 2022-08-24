#include <iostream>
using namespace std;

int main() {

    bool retry = true;

    while (retry) {

        int n = 0;
        int sum = 0;

        cout << "Enter a positive integer: ";
        cin >> n;

        if (n < 0) {
            cout << "You cannot enter a negative number, please try again." << endl;
        }

        for (int i = 1; i <= n; ++i) {
            sum += i;
        }

        cout << "Sum = " << sum << endl;

        system("pause");
    }
    
}
