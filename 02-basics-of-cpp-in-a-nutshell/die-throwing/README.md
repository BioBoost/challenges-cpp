---
name: Die Throwing
description: Throw a 6-sided die 100'000 times
details: ./02-basics-of-cpp-in-a-nutshell/die-throwing/README.md
difficulty: Medium
solution: false
unitTests: false
keywords: arrays random
solved: false
notes:
---

# Die Throwing

Create an application that throws a 6 sided die 100'000 times. Generate the thrown values using the `rand()` function.

Keep count of how many times each side is thrown using an array. Since the die has 6 sides, it means your array should have a size of 6. At the end, if you sum all values inside your array, the total should be 100'000. You can use this as a check.

Does each value have an equal chance? If so, the random generator is distributed uniformly.

Make your code more maintainable by using constants for the magic numbers.

## Expected Output

The application should produce the output as shown below:

```text
Welcome to the Die Thrower app

Results:
1: 16549 throws
2: 16593 throws
3: 16960 throws
4: 16682 throws
5: 16599 throws
6: 16617 throws
```
