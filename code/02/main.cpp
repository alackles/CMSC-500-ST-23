#include <iostream>
#include "AbstractGenome.h"

int main() {
    AbstractGenome<int> genome(20);
    genome.fill(4);
    for (auto i : genome.get()) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}