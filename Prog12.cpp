#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){

    const int MONTHS = 12;

    double rainfall[MONTHS];
    double totalRainfall = 0;
    int minRainfallMonth =0, maxRainfallMonth=0;
    
    string monthNames[MONTHS] ={"January","February","March","April","May","June","July","August","September","October","November","December"};

    for(int month = 0; month<MONTHS; month++){
        std::cout<<"Enter "<<monthNames[month]<<" rainfall (in inches): ";
        std::cin >> rainfall[month];
            while(rainfall[month]<0){
                std::cout<<"invalid data (negative rainfall) -- retry\n";
                std::cout<<"Enter "<<monthNames[month]<<" rainfall (in inches): ";
                std::cin >> rainfall[month];
    }
    }

    for(int month = 0; month<MONTHS; month++){
        totalRainfall+=rainfall[month];
            if(rainfall[month]>rainfall[maxRainfallMonth]) maxRainfallMonth=month; 

            if(rainfall[month]<rainfall[minRainfallMonth]) minRainfallMonth=month;
    }

    std::cout<<endl;
    std::cout<<"The total rainfall for the year is " << totalRainfall <<" inches." << endl;
    std::cout<<"The average monthly rainfall is " << totalRainfall/MONTHS <<" inches."<< endl;

    std::cout<<monthNames[maxRainfallMonth]<<" has the highest rainfall of "<<rainfall[maxRainfallMonth]<<" inches.\n";
    std::cout<<monthNames[minRainfallMonth]<<" has the highest rainfall of "<<rainfall[minRainfallMonth]<<" inches.\n";



    return 0;
    system("pause");
}