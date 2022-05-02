#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
    Individual* result=mPtr->mutate(indPtr,k);
    return result;
}
int main(int argc, char const *argv[]) {
    string binarystr1, binarystr2;
    int k1, k2;
    std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    Individual *indi1 = new Individual(binarystr1);
    Mutator *mutator1= new BitFlip();
    Individual *indi2=execute(indi1,mutator1,k1);
    Individual *indi3 =new Individual(binarystr2);
    Mutator *mutator2 = new Rearrange();
    Individual *indi4=execute(indi3,mutator2,k2);
    string mutated_string=indi2->getString();
    int lengthOfMS=indi2->getLength();
    for (int i = 0; i < lengthOfMS; i++) {
        cout << mutated_string[i];
    }
    std::cout << " ";
    string R = indi4->getString();
    int max=indi4->getMaxOnes();
    int lengthOfRearrangeList=indi4->getLength();
    for (int i = 0; i < lengthOfRearrangeList; i++) {
        std::cout << R[i];
    }
    std::cout << " ";
    std::cout << max << '\n';
    return 0;
}