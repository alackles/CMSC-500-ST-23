#ifndef BITSPOP_H_
#define BITSPOP_H_

#include "BitsOrganism.h"

class BitsPop {

    std::vector<BitsOrganism *> pop;
    int popsize;

public:

    BitsPop(int n, int genomesize) {
        popsize = n;
        for (int i = 0; i < n; i++) {
            BitsOrganism* org = new BitsOrganism(genomesize);
            pop.push_back(org);
        }
    }

    void update(const std::vector<BitsOrganism*> & newpop) {
        pop = newpop;
    }

    std::vector<BitsOrganism*> getPop() {
        return pop;
    }

    BitsOrganism* getMax() {
        auto it = std::max_element(pop.begin(), pop.end());
        return *it;
    }

    std::vector<BitsOrganism*> tournament_select(int tournsize) {
        // your implementation
        // return newpop
    }

    std::vector<BitsOrganism*> roulette_select() {
        // your implementation
    }

};

#endif /*BITSPOP_H_*/