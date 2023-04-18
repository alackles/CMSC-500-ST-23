#include "BitsPop.h"
#include "BitsOrganism.h"

main() {

    int popsize = 100;
    int genomesize = 1000;
    int n_generations = 100;

    BitsPop population(popsize, genomesize);

    for (int i = 0; i < n_generations; i++) {

        // Selection
        std::vector<BitsOrganism> newpop;
        // int k = 7; // tournament size
        //newpop = population.tournament_select(k)
        //newpop = population.roulette_select() 

        // variation
        for (auto org : population.getPop()) {
            org.point_mutate();
            //org.genome.block_mutate(k);
        }

        // heritability
        population.update(newpop);


    }

}