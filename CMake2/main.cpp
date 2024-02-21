#include <iostream>
#include <cmath>

int main() {
    unsigned char number = 7;      // 7 = 00000111
    //unsigned char number = 98;     // 98 = 01100010
    //unsigned char number = 241;    // 241 = 11110001

    unsigned short indexI, indexJ;

    std::cin >> indexI >> indexJ;

    unsigned short mask = (unsigned short)pow(2, indexI - 1);
    bool bitValue = number & mask;

    unsigned short invertNumber = number ^ 255;

    unsigned short changeNumber = (number ^ (1 << (indexI - 1))) ^ (1 << (indexJ - 1));

    std::cout << indexI << number << ": " << bitValue << std::endl;
    std::cout << invertNumber << std::endl;
    std::cout << changeNumber;
}