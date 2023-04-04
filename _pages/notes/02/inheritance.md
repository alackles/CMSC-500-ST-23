---
title: Inheritance in C++
permalink: /notes/02/inheritance/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

C++ "inheritance" has very little to do with biological "inheritance". They are only grouped together here for naming convenience and because the concept is fundamental to how we set up evolutionary systems later, so we're introducing them at the same time. 

If we're thinking about inheritance in evolution, we probably want to model a genome in some way. One way to do this is with a genome class that has some attributes. A very simple implementation would use vectors to represent the information stored in that genome. 

**Note:** This isn't exactly world's greatest practice for C++ code. It's just to show you some features and functionality. 


```cpp
template <class T>
class AbstractGenome {
    protected:
        std::vector<T> genome;
    public:
        
        AbstractGenome(int n) {
            genome.resize(n);
        }

        void fill(T x) {
            std::fill(genome.begin(), genome.end(), x);
        }
}
```

# Exercise

## Practice

1. Create an `AbstractGenome` of type `char` and fill it with all the character `A`. 
2. Add a public member function to `AbstractGenome` that allows for the following syntax to initialize an abstract genome off of a vector (which you would rarely do, but that's okay).

```cpp
AbstractGenome<int> genome(10);
std::vector<int> vec = {2, 3, 4, 5, 0, 2, 35, 3, 4, 2};
genome.set(vec);
```


## Bits Genome 

Create a `BitsGenome` class that inherits from `AbstractGenome` but specifically expects booleans as elements. Add a member function called `ones()` that returns the number of 1s in the genome. 

## Ints Genome

Create an `IntGenome` class that inherits from `AbstractGenome` but specifically expects integers as elements. Add a member function called `count()` that takes an integer argument and returns the number of times that integer appears in the genome. 