#include <iostream>
#include <stdlib.h>

using namespace std;

double calculateRetail(double cost, double percent) {
	double totalCost = 0;
	totalCost = ((cost / 100) * percent) + cost;
	return totalCost;
}

int main() {

	double wholeSaleCost = 0;
	double percentage = 0;
	double totalPrice = 0;

	std::cout << "Please enter non negative value for the wholesale price and the percentage:" << std::endl;
	std::cin >> wholeSaleCost >> percentage;
	while (wholeSaleCost < 0 || percentage < 0) {
		std::cout << "Please enter non negative value for the wholesale price and the percentage:" << std::endl;
		std::cin >> wholeSaleCost >> percentage;
	}

	totalPrice = calculateRetail(wholeSaleCost, percentage);
	std::cout << "The total cost is : $" << totalPrice << std::endl; 


    system("pause");
    return 0;
}
