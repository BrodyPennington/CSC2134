#include "iostream"
#include "cstdio"
#include <fstream>

int main() {

    std::string first, last;
    std::string sentence;

    std::cout << "What is your first and last name?" << std::endl;
    std::cin >> first >> last;


    std::cout << "Now write a brief sentence that describes yourself!" << std::endl;
    std::cin >> sentence;

    std::ofstream MyFile(first + "_" + last + ".html");

    MyFile << "<!DOCTYPE html>";
    MyFile << "<html>";
    MyFile << "<head>" + first + " " + last + "'s webpage" + "</head>";
    MyFile << "<body>";
    MyFile << " <center>";
    MyFile << "<h1>" + first + " " + last + "</h1>";
    MyFile << " </center>";
    MyFile << "<hr>";
    MyFile << " <center>";
    MyFile << sentence;
    MyFile << " </center>";
    MyFile << "</body>";
    MyFile << "</html>";
    MyFile.close();

    system("pause");
    return 0;
}