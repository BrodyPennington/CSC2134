#include <iostream>
#include <iomanip>
#include <stdlib.h>

int main() {    


    const double pound = 0.5517;
    const double peso = 19.1964;
    const double yen = 114.3262;
    const double euro = 0.8713;
    const double franc = 0.9115;

    double pound1, peso1, yen1, euro1, franc1;


    int currency = 0;
    double usdollar = 0;

        std::cout << std::setprecision(2) << std::fixed;

        std::cout << "Please enter your dollar ammount: $";
        std::cin >> usdollar;


        std::cout << "Please select a conversion number:" << std::endl;
        std::cout <<    "1. British Pound\n"
                        "2. Mexican Peso\n"
                        "3. Japanese Yen\n"
                        "4. European Euro\n"
                        "5. Swiss Franc" << std::endl;
        std::cin >> currency;

    switch(currency) {
        case 1:
            pound1 = usdollar * pound;
            std::cout << "Your conversion to pounds is: " << pound1 << std::endl;
            break;
        case 2:
            peso1 = usdollar * peso;
            std::cout << "Your conversion to pesos is: " << peso1 << std::endl;
            break;
        case 3:
            yen1 = usdollar * yen;
            std::cout << "Your conversion to yen is: " << yen1 << std::endl;
            break;
        case 4:
            euro1 = usdollar * euro;
            std::cout << "Your conversion to euros is: " << euro1 << std::endl;
            break;
        case 5:
            franc1 = usdollar * franc;
            std::cout << "Your conversion to franc is: " << franc1 << std::endl;
            break;    
    }

    system("pause");
    return 0;
}


// Written fully by Brody Pennington