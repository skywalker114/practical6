#ifndef Mutator_H
#define Mutator_H
#include <iostream>
#include <string>
#include "Individual.h"

class Mutator {
private:
public:
    virtual Individual* mutate(Individual* list, int k)=0;
};
#endif