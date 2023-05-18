---
title: MABE2
permalink: /notes/08/mabe2proj/
---

Based on the answers to the project sign-ups (and some unforeseen complexities with the current software), final projects will fall into one of two categories: **Logic16** or **Visualization**. 

## Logic 16

### End Goal

An expanded version of the current Logic9 implementation in MABE2 which implements the tasks in [Logic16 from MABE1](https://github.com/Hintzelab/MABE/blob/master/code/World/Logic16World/Logic16World.h).

### Background

Logic16 asks organisms to take two inputs and perform 16 different logical operations, gaining points for each operation they correctly evaluate. They are as follows:

- FALSE 
- A NOR B
- !A AND B
- !A
- A AND !B
- !B
- A XOR B
- A NAND B
- A AND B
- A NXOR B
- B
- !A OR B
- A
- A OR !B
- A OR B
- TRUE

For example, given the input (0, 1), the correct output would be the following for each.

- FALSE: 0
- A NOR B: 0
- !A AND B: 1
- !A: 1
- A AND !B: 0
- !B: 0
- A XOR B: 1
- A NAND B: 1
- A AND B: 0
- A NXOR B:  0
- B: 
- !A OR B: 1
- A: 0
- A OR !B: 0
- A OR B: 1
- TRUE: 1

In MABE2, these are implemented as separate tasks, each derived from a base task, implemented in `source/evaluate/callable/`. 

### For Tuesday

Explore [the logic 9 tasks](https://github.com/mercere99/MABE2/tree/master/source/evaluate/callable) and [their associated settings file](https://github.com/mercere99/MABE2/blob/master/settings/logic_9.mabe) to try to understand the structure of Logic9, and identify which 7 tasks are missing from Logic16. 

Then, try to implement at least one of these tasks, using the existing EvalTask files as a basis. 


## Visualization

### End Goal

A Python or R script which can be quickly and automatically run on default MABE2 output data. Also, an expansion of what "default MABE2 output data" looks like.

### Background

The default output format for MABE2 data is a CSV. Depending on which task you run, you will often get two files: `fitness.csv` and `max_org.csv`. The former contains summary results of the entire population, while the latter contains specific data for the maximally-performing organism at any particular stage. The columns tend to be the same across runs--but you should try a few tasks to verify this.

### For Tuesday

Run one of the existing tasks (for example, NK.mabe) and visualize either `fitness.csv` or `max_org.csv` with generations as the x-axis, and your parameter(s) of choice on the y-axis. 


