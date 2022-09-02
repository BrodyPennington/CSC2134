#include <iostream>
#include <stdlib.h>
#include <iomanip>


int main() {

    double total= 2500.00 ;
     
    float y = 0.04 ;
    int i ;
    
    std::cout << std::setprecision(2) << std::fixed;

    for (i = 1 ; i <= 6 ; i++) {
        
       total = total + (total * y) ;
   
       std::cout<< "Year " << i << " rate: " <<"$" << total << std::endl;
    }

    system("pause");
    return 0;
}