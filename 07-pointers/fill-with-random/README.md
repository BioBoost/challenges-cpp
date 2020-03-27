---
name: Fill with Random
description: Fill array with random numbers
details: ./07-pointers/fill-with-random/README.md
difficulty: Medium
solution: false
unitTests: false
keywords: pointers arrays random
solved: false
notes:
---

# Fill with Random

The application in `src/main.cpp` contains a function `fill_with_random()` that takes an array as its argument. It should fill the array with random values.

Next add a second function with the same name (function overloading) but which also takes in a `minimum` and `maximum` values as arguments. These should be the boundaries of the random generated values.

Next refactor the code to make it more DRY.

Also update the main to generate the expected output.

## Expected Output

The application should produce the output as shown below:

```text
5 random numbers: 23534 -53233 3312 43693 92
3 random numbers with boundaries [10, 20]: 11 19 13
```
