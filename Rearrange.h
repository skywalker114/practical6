#ifndef Rearrange_H
#define Rearrange_H
#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"

class Rearrange :public Mutator {
private:
    int leng;
    int mention;
public:
    Individual* mutate(Individual* list, int k);
};
#endif