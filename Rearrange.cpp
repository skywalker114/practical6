#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
#include "Rearrange.h"
using namespace std;

Individual* Rearrange::mutate(Individual* list, int k){
  leng=list->getLength();
  mention=k%leng;
  if (mention==0) {
    mention=leng-1;
  }
  else{
    mention=mention-1;
  }
  list->rearrangeBit(mention);
  return list;
}