#include "BitsOrganism.h"

class BitsPop {

    std::vector<BitsOrganism> pop;
    int popsize;

public:

    BitsPop(int n, int genomesize) {
        popsize = n;
        for (int i = 0; i < n; i++) {
            BitsOrganism org = BitsOrganism(genomesize);
            pop.push_back(org);
        }
    }

    void update(std::vector<BitsOrganism> newpop) {
        std::copy(newpop.begin(), newpop.end(), pop);
    }

    std::vector<BitsOrganism> getPop() {
        return pop;
    }

    BitsOrganism getMax() {
        auto it = std::max_element(pop.begin(), pop.end());
        return *it;
    }

    std::vector<BitsOrganism> tournament_select(int tournsize) {
        // your implementation
        // return newpop
    }

    std::vector<BitsOrganism> roulette_select() {
        // your implementation
    }

};