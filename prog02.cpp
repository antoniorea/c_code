/*
*   Simple main funtion:
*   read two numbers and write their sum
*   C++11 Support in GCC
*   $g++ -o prog02 -std=c++0x -Wall prog02.cpp
*   C++17 Support in GCC
*   $g++ -o prog02 -std=c++17 -Wall prog02.cpp
*/
#include <iostream>                 // a preprocessor directive


int main()
{
    //using namespace std;

    // prompt user to enter two numbers
    std::cout << " Enter two numbers :" << std::endl;
    int v1{}, v2{};              // variables to hold the input we read
    std::cin >> v1 >> v2;                // read input
    std::cout    << "  The sum of  " << v1 <<"  and  " << v2 
            << "  is  " << v1 + v2 << std::endl;
    return 0;
}

