#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

Individual::Individual (string bin_str){
    length=bin_str.size();
    for (int i = 0; i < length; i++) {
        copyOfList[i]='0';
    }
    binaryString=bin_str;
}

string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    if (pos>length) {
        return -1;
    }
    if (binaryString[pos]=='1') {
        return 1;
    }
    return 0;
}

void Individual::flipBit(int pos){
    if (binaryString[pos]=='1') {
        binaryString[pos]='0';
    }
    else{
        binaryString[pos]='1';
    }
}

int Individual::getMaxOnes(){
    int Max=0;
    int count=0;
    for (int i = 0; i < length; i++) {
        if (binaryString[i]=='1') {
            count+=1;
        }
        if (count>Max) {
            Max=count;
        }
        else if (binaryString[i]=='0') {
            count=0;
        }
    }
    return Max;
}

int Individual::getLength(){
    return length;
}

void Individual::rearrangeBit(int pos){
    int counts=0;
    for (int i = 0; i < length; i++) {
        if (i<length-pos) {
            rearrange_binaryString[i]=binaryString[pos+i];
            counts++;
        }
        else {
            rearrange_binaryString[i]=binaryString[i-counts];
        }
    }
    for (int i = 0; i < length; i++) {
        binaryString[i]=rearrange_binaryString[i];
    }
}