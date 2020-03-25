# Challenges for the C++ Course

This repository contains the challenges for the students of VIVES Bruges that take the course [Object Oriented Programming with C++](https://oop-cpp.netlify.com/).

## GitHub Classroom Setup

Follow the instructions below if you are cloning this via GitHub Classroom.

### Cloning and fetching updates

First clone the repository locally:

```bash
git clone .....
cd challenges-cpp-.....
```

Make a remote link to the original repo so you can fetch updates:

```bash
git remote add base git@github.com:BioBoost/challenges-cpp.git
```

Now you can pull changes into your repository from the original repo:

```bash
git pull base master
```

### VuePress Setup

This challenge repo comes with a VuePress site that shows an overview of the challenges. To set this up follow the instructions below.

```bash
npm install
```

To start the development server just issue the command (needs to be done every time):

```bash
npm run dev
```

You should now be able to surf to `http://localhost:8080`.

Each challenge `README.md` has some frontmatter at the top:

```text
name: Hello World
description: Just get this Hello World app to compile
details: ./01-hello-world/hello-world/README.md
difficulty: Easy
solution: false
unitTests: false
keywords: compiler
solved: false
notes:
```

There are two options that you can change:

* `solved` which should be set to `true` if you solved the challenge successfully.
* `notes` which you can use to add a remark. These will later be shown on the webpage.
