---
name: Status Code
description: Return different status code from main
details: ./01-hello-world/status-code/README.md
difficulty: Easy
solution: false
unitTests: false
keywords: commandline statuscode
solved: false
notes:
---

# Status Code

Create a small C++ application that returns a value from main different from `0`. This is the status code of the application and indicates if all went well.

On Linux one can request the return code of the previous executed command using `echo $?`. This also works with PowerShell but it only returns `True` or `False` to indicate if the last command succeeded or failed.

## Explain Chaining

On Linux, commands can easily be chained based on their status code. Try for example `ls ~ && echo "All went well"` or `ls /thisdoesnotexist && echo "All went well"`.

**Can you explain what happens here exactly and why?**

<!-- Answer the question here (remove this comment!) -->
