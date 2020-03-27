---
name: Largest and Smallest
description: Refactor the code to use a class to determine minimum and maximum array values
details: ./07-pointers/largest-and-smallest/README.md
difficulty: Hard
solution: false
unitTests: false
keywords: pointers classes
solved: false
notes:
---

# Largest and Smallest

The function `find_range()` determines the smallest and largest values inside the array (assuming) no duplicate values are allowed inside the array.

The design is not that great and it is lacking some functionality.

Refactor the code to a class and add the following methods to it:

* `int minimum(int * array, unsigned int size)` to determine the minimum value inside the array
* `int maximum(int * array, unsigned int size)` to determine the maximum value inside the array
* `unsigned int index_of_minimum(int * array, unsigned int size)` to determine the index of the minimum value inside the array
* `unsigned int index_of_maximum(int * array, unsigned int size)` to determine the index of the minimum value inside the array

Note that the minimum and maximum are not "returned" anymore via a pointer but just as a return value from the method.

Is your code DRY? Did you reuse the `index_of_minimum()` to implement the `minimum()` method? And for `maximum()`. Well if not, you should.

## Expected Output

The application should produce the output as shown below:

```text
The minimum is -23 @ index 3
The maximum is 34 @ index 6
```
