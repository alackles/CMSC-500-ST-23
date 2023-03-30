---
title: 
permalink: /notes/01/cpp/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Hands-On C++

If you are in this class, you should have some familiarity with C++ already. This is not intended to serve as an intro to C++, but a reminder of some quirks and features of C++.

In your groups, create a C++ **class** for an `Organism`. G

1. Give it three simple **attributes**: an integer to represent its age called `age`, a string to represent its name called `name`, and a boolean value to represent whether it is alive or dead called `isAlive`. 
2. Create a **comparison operator overload** to allow you to sort organisms by age.

Create a second C++ **class** called `Population`. 

1. Give it two attributes: a vector called `pop` which is a vector of `Organism`s, and an integer `maxSize` which is the maximum size of the population. You can set this max size to your preferred value. 
2. Instantiate a default population of 20 organisms with random ages. 
3. Sort the population using `std::sort`. 

You have the entire class period from now until the end of class with your groups to work on this, and you are free to look up information online, go back through old notes, ask for help; whatever you need to do to recall how to create new classes and work with them. 
