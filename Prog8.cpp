#include "iostream"
#include "cstdio"
#include <fstream>

int main() {

    std::string first, last;
    std::string sentence;

    std::cout << "What is your first and last name?" << std::endl;
    std::cin >> first >> last;

    std::ofstream MyFile(first + "_" + last + ".txt");

    std::cout << "Now write a brief sentence that describes yourself!" << std::endl;
    std::cin >> sentence;

    MyFile.open (first + "_" + last + ".txt");
    MyFile << "<!DOCTYPE html>";
    MyFile << "<html>";
    MyFile << "<head>" + first + last + "'s webpage" + "</head>";
    MyFile << "<body>";
    MyFile << " <center>";
    MyFile << "     <h1>" + first + last + "</h1>";
    MyFile << " </center>";
    MyFile << " hr /";