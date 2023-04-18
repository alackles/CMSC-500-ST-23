#ifndef BITSGENOME_H_
#define BITSGENOME_H_

#include "AbstractGenome.h"
#include <algorithm>

class BitsGenome : public AbstractGenome<bool> {

    int n = genome.size();

    public:

        void init() {   // initialize with random 1s and 0s
            for (int i = 0; i < n; i++) {
                genome.push_back(rand() % 2);
            }
        }

        void point_mutate() {
            int locus = rand() % n;         // choose a random site
            genome[locus] = rand() % 2;     // set to either 0 or 1
        }

        void block_mutate(int k) {
            int start = rand() % (n-k);         // where to start copying from
            int dest = rand() % (n-k);          // which part to overwrite
            std::vector<bool>::const_iterator first = genome.begin() + start;
            std::vector<bool>::const_iterator last = genome.begin() + start + k;
            std::vector<bool> temp(first, last);
            std::copy(temp.begin(), temp.end(), genome.begin() + dest);
        }

        int ones() {
            return std::count(genome.begin(), genome.end(), 1);
        }
};

#endif /* BITSGENOME_H_ */