#include <iostream>
#include "mat.hpp"
#include <string>
#include <algorithm>

int main() {
    int x,y;
    char a,b;
    std::cout << "Please enter 2 numbers (matrix size) and 2 characters (carpet symbols)" << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cin >> a;
    std::cin >> b;
    string ans = ariel::mat(x,y,a,b);
    std::cout << ans << std::endl;
    return 0;
}