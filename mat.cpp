#include <iostream>
#include "mat.hpp"
#include <string>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <vector>

using namespace std;
string ariel::mat(int y,int x,char a,char b){
    int const MAX_VALUE = 126;
    int const MIN_VALUE = 33;
    if (x <= 0 || y <= 0){
        throw  std::invalid_argument("Mat size has to be a positive number above 0");
    }
    if (x%2 == 0 || y%2 == 0){
        throw std::invalid_argument("Mat size has to be odd");
    }
    if (a < MIN_VALUE || a > MAX_VALUE){
        throw std::invalid_argument("First char parameter is invalid");
    }
    if (b < MIN_VALUE || b > MAX_VALUE){
        throw std::invalid_argument("First char parameter is invalid");
    }

    std::vector<std::vector<char>> curr_mat;
    curr_mat.resize(x, std::vector<char>(y));

    int minskip = std::min(x,y);
    minskip = minskip / 2;
    char currchar = a;
    for (int skip = 0; skip <= minskip; ++skip) {
        for (int i = 0; i < y-(2*skip); ++i) {
            curr_mat[skip][i+skip] = currchar;
            curr_mat[x-skip-1][i+skip] = currchar;
        }
        for (int i = 0; i < x-(2*skip); ++i) {
            curr_mat[i+skip][skip] = currchar;
            curr_mat[i+skip][y-skip-1] = currchar;
        }
        if (currchar == a){
            currchar = b;
        }
        else{
            currchar = a;
        }
    }

    std::string ans;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            ans += curr_mat[i][j];
        }
        if (i != x-1){
            ans += "\n";
        }
    }

    return ans;
}