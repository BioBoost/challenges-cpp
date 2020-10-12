---
name: Higher - Lower
description: A guessing game for the player
details: ./b-fundamentals/05-loops/higher-lower/README.md
difficulty: Medium
solution: false
unitTests: false
keywords: while random operators conditions
solved: false
notes:
---

# Higher Lower

Create a higher lower guessing game for the user.

Basically you generate a random number in the interval `[min, max]` (choose this yourself) for the user to guess.

The user then gets a number of pre-defined tries to guess the number. Once the user entered a guess, state if he/she needs to guess lower or higher. In case the user guessed the number, congrats him or her.

## Expected Output

The application should produce similar output as shown below:

```text
Welcome to Higher - Lower.

I'll think of a secret number between 0 and 100 and you
get 10 tries to guess it.

Thinking ...... Ok got one.

Please enter your guess [0, 100] - 10 tries left: 12
Oofff to low. Go higher.
Please enter your guess [0, 100] - 9 tries left: 56
Oofff to low. Go higher.
Please enter your guess [0, 100] - 8 tries left: 96
Shooting over. Go lower.
Please enter your guess [0, 100] - 7 tries left: 90
Shooting over. Go lower.
Please enter your guess [0, 100] - 6 tries left: 80

OMG!!! You got it. Clean hit.

Thanks for playing. That was fun.
```
