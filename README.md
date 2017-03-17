# Design Patterns in C and C++
This repo contains a collection of helpful examples to demonstrate the use
of design patterns in C++.

The "gang_of_four" directory contains the code examples from the famous "Gang of Four"
book and modified for exposition by Douglas C. Schmidt.
http://www.dre.vanderbilt.edu/~schmidt/qualcomm/GoF-patterns.html

The "embedded" directory contains the source code from the book "Design Patterns for Embedded Systems in C"
https://www.elsevier.com/books/design-patterns-for-embedded-systems-in-c/douglass/978-1-85617-707-8

The "gpp_code" directory contains the source code from the book available here:
http://gameprogrammingpatterns.com/

I have modified and refactored various components of the code from each location in the
hope that it will make it more understandable and modern in places. This is a work in progress.

I have included each of these sets of examples because I feel that they each demonstrate
useful techniques that are not necessarily conveyed by the code in the others.

- The "Gang of Four" code demonstrates the canonical design patterns in classical C++ (as influenced by Smalltalk)
    - it, however, suffers from being written in classical C++ (except where I have made modifications) and is not
      as clear as I feel it could be at times

- The "Design Patterns for Embedded Systems in C" demonstrates the usage of design patterns when interacting
  directly with hardware. It also shows how to use C in an object-oriented manner within this context.

- The "Game Programming Patterns" shows the use of many common idioms that are not outlined elsewhere, such as
  the game loop, the event queue, and double buffering. These idioms are so common that it is useful to
  have a clear example of these for reference.

The "custom" directory contains a set of examples that I am currently in the process of completely
rewriting to hopefully make the general usage and intention of the pattern more clear.

