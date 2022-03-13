#include <iostream>
#include "mat.hpp"
#include <string>
#include <algorithm>

int main() {
    int x,y;
    char a,b;
    std::cout << "Please enter 2 numbers (matrix size) and 2 characters (carpet symbols)" << std::endl;
    //Accepting values for our matrix
    std::cin >> x;
    std::cin >> y;
    std::cin >> a;
    std::cin >> b;
    string ans = ariel::mat(x,y,a,b);
    //Printing the reasult
    std::cout << ans << std::endl;
    return 0;
}