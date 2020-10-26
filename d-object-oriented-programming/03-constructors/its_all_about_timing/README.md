---
name: Its all About Timing
description: 	Converts seconds to a Timestamp
details: ./d-object-oriented-programming/03-constructors/its_all_about_timing/README.md
difficulty: Medium
solution: false
unitTests: false
keywords: classes constructors operators
solved: false
notes:
---

# Its all About Timing

Create a class `Timestamp` that allows a user of it to hold a timestamp (within a single day, so only hours, minutes and seconds). Keep track of the time by tracking the components `hours`, `minutes` and `seconds` as attributes of the class. The hours should be kept in `24h` format.

Add getters for all three these components.

Next add setters for all the three components. Do make sure that the user can call the method with any number by taking care of the overflow. This means that setting minutes to `185` should result in the hours being set to `3` and the minutes to `5`.

Now also allow the user to add a certain amount of time to the `Timestamp` by adding the methods `add_hours()`, `add_minutes()` and `add_seconds()`. Take care of the overflow by adding the excess amount to the appropriate component.

Also add a method `to_string()` that returns a string representation of the timestamp in the format: `hh:mm:ss`. Make sure each component is represented using 2 digits.

Last add both a default constructor as well as a constructor that will take in the three components (hours, minutes, seconds). Again, make sure to handle the overflow.

Create a small demo application that shows how the class can be used (inside of `main()`). For example (make something up yourself).

```text
Welcome to Its All About Timing

Please enter the components of a timestamp

Seconds: 129
Minutes: 12
Hours: 123

Timestamp: 03:15:09
```
