---
title: Evolutionary Biology Background
permalink: /notes/02/evo/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Before we can model evolution in a computer system, we need to understand evolution as a concept. The first part of today's class is a discussion on evolution and evolutionary processes so that we can start to understand how those processes can be modeled in a computer. 

Evolution has three key ingredients:
- **Heritability.** Traits have to be able to be passed down to offspring. 
- **Variation/Mutation.** Traits have to be able to change over time in the population in some way.
- **Selection.** There has to be some external pressure on the system driving a change in proportions

In today's class we'll talk about the general concepts behind evolutionary systems, and also touch on _heritability_. 

# Discussion

## Define Evolution

What is evolution? What isn't evolution? Work within your small groups to come up with a _complete_ yet _concise_ definition of evolution. Take into account that evolution is not _just_ something that acts on natural systems; it is a _process_ and can be broadly applied outside of biology. 

## Evolutionary Misconceptions

Each of your groups will be assigned one of the following misconceptions; you'll answer these two questions:

- How can we correct this misconception? 
- Where do you think this misconception comes from? That is, why might people think this? 

1. Evolution results in progress; organisms improve or become better through evolution.
2. Evolution is the result of organisms trying to adapt to their environments.
3. The fittest organisms in a population are the healthiest, strongest, fastest, largest, etc. 
4. Evolution is about the "survival of the fittest": the best organisms reproduce to create the next generation.

# Inheritance

How are traits passed down in evolution, if not through the "best" or through attempts to make improvements? 

Traits are passed down via a transfer of _information_. In this case, information is stored in the pattern of molecules of DNA. This information is then transcribed into a secondary alphabet (RNA), then into functional components (proteins). 

![the central dogma of biology](https://cdn.kastatic.org/ka-perseus-images/2b597889d05bc601803a3b4d9ec5ccd5e7b8d3af.png)

**Think:** What parts of this process do you think are necessary for the concept of _inheritance_ as it relates to evolution? Which parts do you think are artefacts of biological systems? 

If we wanted to model this process computationally, what might be a good place to start? 