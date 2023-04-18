---
title: Selection Schemes
permalink: /notes/04/schemes/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Roulette Selection

## Concept

"Fitness proportional" -- each organism gets some "part" of a "wheel", and the wheel is "spun". The size of that part is dependent on the organism's fitness. Whatever organism is selected is copied into the next population. 
## Psuedocode

# Tournament Selection

# Concept

Select a small group of size k from the population and choose the "best" organism out of that group. That is the organism that gets added to the new population.

## Pseudocode

```
// for tournament size k
new population = []
tournament_list = []
while new_population.size < old_population.size
    for i from 1 to k
        choose random organism ORG from old_population
        tournament_list.add(ORG)
    end for
    new_population.add(tournament_list.max())
end while
```

Lexicase selection video

<iframe width="560" height="315" src="https://www.youtube.com/embed/Th6Hx3SJOlk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

# Code

See code [here](https://github.com/alackles/CMSC-500-ST-23/tree/main/code/04).

If you want to download as a zip file, see [download-directory](https://download-directory.github.io/).