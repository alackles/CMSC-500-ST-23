---
title: ALife Hackathon
permalink: /notes/05/hackathon/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The goal of this "hackathon" is to let you expand upon the basic digital evolution algorithm we've made so far to try to make it your own. You have almost all of today and Thursday to do this--the last 30 minutes of class on Thursday will be showing off what you've made. 

You can use this [base code](https://github.com/alackles/CMSC-500-ST-23/tree/main/code/04) as a starting point. If you are more comfortable in a language besides C++, you can use that language, but you'll have to translate the base code. 

# What Should I Make?

Anything!

But that's pretty vague.

There are three major areas you might want to expand upon, but you should feel free to go beyond these or hone in on what really interests you. I don't expect you to do all of these, but you should at LEAST have a display.

## Display

You should have some way to display each _generation_, or each iteration of the loop, for your population. This can be pretty simple and can be entirely terminal-based, but you should decide when this display happens and how. Summary statistics are fine for this; here is an example:

```
Gen: 1      MAX: 0.6        MEAN: 0.5
Gen: 2      MAX: 0.8        MEAN: 0.5
Gen: 3      MAX: 0.78       MEAN: 0.45
Gen: 4      MAX: 0.64       MEAN: 0.7
...
```

Don't forget about `std::format` or other formatting options like `\t` to line up columns.


## Evaluation

Right now, the evaluator just counts the number of 1s in the genome. We can get a lot more complex than that! Some possibilities:

- `half-and-half`: Half 0s and half 1s; the closer to 50/50 they are, the higher the score
- `Royal Road`: Given a number _k_, how many sequential 'blocks' of _k_ 1s the organism has; it must start with a brick. If `k=3`, for example, `111000000` gives a score of 1, but `011100000` gives a score of 0. `111111000` gives a score of 2. `111110000` gives a score of 1.
- `Packing`: Given a number _k_ and a packing size _p_, how many blocks of _k_ 1s followed by _p_ 0s the organism has. For example, if `k=3, p=2`, then `11100111` gives a score of 2. `11111100` gives a score of 0. `111011100111` gives a score of 2. 

## Genome

Right now, the genome consists of 0s and 1s only. Our AbstractGenome is a template class; you could make a derived class CharGenome or IntGenome or whatever other kind of genome you want to make. But keep in mind that'll probably mean also changing the evaluator as described above!

For an int or char genome, you might consider evaluators that do things like:

- `minimal`: Find the minimal sum of all values
- `sequential`: Order your genome 1 through size n, or a through z. Earn points for the longest sequential run. 


# How Do I Present it?

You'll have **three** minutes to show us:

1. What change you made, in brief
2. Your algorithm running
3. The final output

You'll just display your code and the run to the class on the boards. 

# What If It Doesn't Work?

Then you should instead describe

1. What change you wanted to make
2. What happens when you run your algorithm
3. A change you think might take you in the right direction