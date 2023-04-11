---
title: My First Evolutionary Algorithm
permalink: /notes/03/evoalg/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The primary goal for todays' class is to work with a pre-built evolutionary algorithm and basically "play around" with the various aspects of an evolutionary algorithm to make sense of it. 

[Here is a simple, working evolutionary algorithm](https://github.com/alackles/CMSC-500-ST-23/blob/main/code/03/ga.py). 

It is written in Python, and the organisms are basically just lists of 0s and 1s. The organisms with more 1s in their genome are considered more fit. 

Play around with this algorithm. The only goal I have for you today is to see and work with an evolutionary algorithm for the first time. Here are some prompts if you'd like them, though you don't have to follow any of them. I'll give you some feedback on this in-class exercise after it is submitted. 

- Try altering the parameters for population size, genome, and generations and see how the graph changes. 
- Try coming up with an alternative fitness function (currently, we are just counting 1s), and try implementing it. 
- Try implementing the algorithm or parts of the algorithm in C++ or another language of your choice. What changes need to be made? 
- The genome here currently only uses 1s and 0s. What if you wanted to use other types? Could you alter the class or create a new class? What about if this was in C++? 
- There is an `easy_mutate()` function included that basically only gives beneficial mutations. What happens if you use `mutate()` instead? Why do you think this happens? Which is more realistic? 
- The algorithm is a little slow. What do you think is the slowest part? What are some possible ways to improve it? Can you do any of them and see if the performance improves? 

At the end of class, whatever you have done, turn it in to Canvas along with a comment answering the following questions:

1. Was there anything that you were confused about before trying this exercise that now makes some more sense?
2. On the flip side, was there anything you thought you had a solid grasp on before this exercise that is now confusing? 

You can also answer or address any of the points above if you chose them.