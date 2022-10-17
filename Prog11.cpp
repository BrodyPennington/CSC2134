#include <iostream>
#include <stdio.h>
#include <algorithm>

const int max = 10;

int main() {
    
    int arr[max];
    int i;

    for(i=0; i < max; i++) {
        std::cout << "Enter number: " << std::endl;
        std::cin >> arr[i];
    }

    std::pair<int*, int*> minmax = std::minmax_element(std::begin(arr), std::end(arr));
    
    std::cout << "The min element is " << *(minmax.first) << std::endl;
    std::cout << "The max element is " << *(minmax.second) << std::endl;

    return 0;
    system("pause");

}