#include "BitsGenome.h"

class BitsOrganism {

    BitsGenome genome;
    int score;

public: 

    BitsOrganism(int n) {
        genome.resize(n);
        score = genome.ones();
    }

    ~BitsOrganism();

    int update() {
        score = genome.ones();
    }

    int getScore() {
        return genome.ones();
    }

    void point_mutate() {
        genome.point_mutate();
    }

    void block_mutate(int k) {
        genome.block_mutate(k);
    }

    bool operator<(const BitsOrganism & other) {
        return score < other.score;
    }

};