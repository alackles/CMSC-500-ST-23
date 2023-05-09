---
title: MABE2
permalink: /notes/06/mabe2/
---

<iframe src="https://docs.google.com/presentation/d/e/2PACX-1vQNRh-HWDWdWVeBPoFEma5rbhAAbNPwOf1vtIP68o3CJSdXMQ0xHjz7Bw5-xV1Ll63WbhSscyiwn7NA/embed?start=false&loop=false&delayms=3000" frameborder="0" width="960" height="569" allowfullscreen="true" mozallowfullscreen="true" webkitallowfullscreen="true"></iframe>

# Basic Steps

These steps are here to serve as guidelines/reminders for the process, **not** as official documentation. The [MABE2 docs](https://mabe2.readthedocs.io/en/latest/first_steps/01_quickstart.html) site has some in-depth, but somewhat complex, instructions about how to actually set up and work with a new config file. The steps are significantly stripped down here for you. 

Anywhere you see `Modname` here, you should just drop in the name of the module. e.g. `Modname.mabe` => `RoyalRoad.mabe`, `EvalModname.hpp` => `EvalRoyalRoad.hpp`.

## Running MABE with Existing Evaluators

1. `cd build` to enter the build directory
2. `make` to compile MABE2
3. Edit the parameters in `settings/Modname.mabe` to your liking. You can probably leave most things as default but may want to play around with the parameters of `EvalModname` in particular to see how things change, or mess with the DataFile parameters if you want to store different kinds of data or give a new name. 
4. `./MABE -f ../settings/Modname.mabe` to run. 

Inportantly, **you do not need to recompile if you are changing parameters** in the `.mabe` file. You only need to recompile if you are changing code. 

## Creating a New Evaluator

1. Write your evaluator in `source/evaluate/static/EvalModname.hpp` by copying one of the existing modules and changing relevant details. `EvalNK.hpp` is a good place to start. 
2. Add a line to `source/modules.hpp`  to `#include "evaluate/static/EvalModname.hpp"`
3. `cd build` to enter the build directory
4. `make` to compile MABE2
5. Copy and paste in [this `gen.mabe`](https://github.com/alackles/CMSC-500-ST-23/tree/main/code/07) file to `settings/gen.mabe`. Edit `EvalModname eval_mod` to match your new module. Optionally, edit `BitsOrg bits_org` to `ValsOrg vals_org` if you'd like to use real-valued numbers instead of bits. 
6. `./MABE -f ../settings/gen.mabe -g ../settings/EvalModname.mabe` to generate your eval module
7. Edit the parameters to your liking, as in 3 above.
8. `./MABE -f ../settngs/Modname.mabe` to run.