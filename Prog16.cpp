
#include <iostream>

#define MAX 50

using namespace std;

//Prototypes of the functions.

int *array_reverse(int[], int);

void display_array(int[], int);

int main()

{

//Declare the variables.

int n, arr[MAX];

//Prompt the user to enter

//the size of the array.

cout << "Enter the size of the array: ";

cin >> n;

//Prompt the user to enter

//the array elements.

for (int i = 0; i < n; i++)

{

cout << "Enter Value " << i + 1 << ": ";

cin >> arr[i];

}

//Call the reversed function.

int *rev_array = array_reverse(arr, n);

//Display the reversed array.

cout << "The reversed array is: ";

display_array(rev_array, n);

//Statement to pause the screen in visual studio.

system("pause");

//Return the value for the main() function.

return 0;

}//End of the main() function.

//Define the function.

int *array_reverse(int arr[], int n) {


int i, j;

if (n <= 0)
    return NULL;

int *temp_array = new int[n];

    for (i = 0; i<n; i++)
        temp_array[i] = arr[n - i - 1];

return temp_array;

}

void display_array(int arr[], int n) {

int i;
cout << "[";

for (i = 0; i<n; i++){
    cout << arr[i];

    if (i != n - 1) {
        cout << ",";
    }

}

cout << "]";
cout << endl;

}