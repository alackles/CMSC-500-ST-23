#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class Organism {
    public:
        int _age;
        std::string _name;
        bool _isAlive;

        Organism() {
            _age = 0;
            _isAlive = true;
        }
        
        ~Organism(){};

        void setAge(int age) {
            _age = age;
        }

        bool operator < (Organism const & org) {
            return _age < org._age;
        }

};

class Population {
    public: 
        std::vector<Organism> pop;
        int maxSize;

        Population() {
            maxSize = 10000;
        }

        Population(int n) {
            maxSize = n;
        }

        ~Population(){};
};

int main() {
    Population population(20);
    for (int i = 0; i < 20; i++) {
        Organism org;
        org.setAge(std::rand() % 100);
        population.pop.push_back(org);
    }
    for (auto it : population.pop) {
        std::cout << it._age << std::endl;
    }

    std::sort(population.pop.begin(), population.pop.end());
    std::cout << "After sort " << std::endl;
    for (auto it : population.pop) {
        std::cout << it._age << std::endl;
    }
}