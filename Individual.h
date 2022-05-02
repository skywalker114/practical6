#ifndef Individual_H
#define Individual_H
#include <iostream>
#include <string>

class Individual {
private:
    int length;
    std::string binaryString;
    std::string copyOfList;
    std::string rearrange_binaryString;
public:
    Individual (std::string bin_str);
    std::string getString();
    int getBit(int pos);
    int getMaxOnes();
    int getLength();
    void flipBit(int pos);
    void rearrangeBit(int pos);
};
#endif