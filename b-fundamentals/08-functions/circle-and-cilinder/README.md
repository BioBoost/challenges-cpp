---
name: Circle and Cilinder
description: Determine area of a circle and volume of a cilinder
details: ./b-fundamentals/08-functions/circle-and-cilinder/README.md
difficulty: Medium
solution: false
unitTests: false
keywords: functions operators
solved: false
notes:
---

# Circle and Cilinder

Start by creating a small app that can determine the area of a circle. Request the required `radius` from the user. Make sure to implement a function for calculating the area.

Next extend the application so it can also be used to used to determine the volume of a cilinder. Request the `height` from the user. Implement a second function to determine the volume.

Now allow the user to choose what action to undertake using a simple menu.

Some points to check:

* Is your code DRY? (Did you use the area method to calculate the volume?)
* What happens if the user chooses a non-existing menu item?
* Did you use `double` everywhere and did do some basic rounding for the output?

## Expected Output

The application should produce similar output to this:

```text
Welcome to Circle and Cilinder.

What would you like to determine?
1. The area of a circle
2. The volume of a cilinder
3. I want to quit

Your choice (1-3): 2

Perfect choice. All I need from you is:
=> The circle radius of the base: 12.3
=> The height of the cilinder: 36.1

Calculating .... Ah there it is

The volume of this cilinder is 17158.0250

Thank you for using Circle and Cilinder.
An App created by VIVES student John Doe.
```
