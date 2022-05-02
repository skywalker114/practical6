#ifndef BitFlip_H
#define BitFlip_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip : public Mutator {
private:
    int leng;
    int mention;
public:
    Individual* mutate(Individual* list, int k);
};
#endif