#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>
#include "BitFlip.h"
using namespace std;

Individual* BitFlip::mutate(Individual* list, int k){
    leng=list->getLength();
    mention=k%leng;
    if (mention==0) {
        mention=leng-1;
    }
    else{
        mention=mention-1;
    }
    list->flipBit(mention);
    return list;
}