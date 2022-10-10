#include <iostream>
#include <stdlib.h>
 
double ftc(double fahrenheit) {
    double celsius;
 
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}




int main() {

    double C;

    std::cout << "--------------------" << std::endl;
    std::cout << "Fahrenheit | Celsius" << std::endl;
    std::cout << "--------------------" << std::endl;

    for (int fahrenheit = 0; fahrenheit <= 32; fahrenheit++) {

         C = ftc(fahrenheit);

        std::cout << fahrenheit << " = ";
        std::cout << C << std::endl;


    }   
    
}