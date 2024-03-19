# CPTR 142: Project III

# Choose Your Own Adventure

This project is a user-input centered game. It unravels a story that depends on the user's choices.
Some bugs and challenges that were encountered are:
* Making the program accept different input types and ask the user to re-input their choice.
* Calling on functions that have not yet been declared, causing an error when the program runs.
* Accidentally losing all the files because of misunderstanding a git command
* Having difficulty merging branches in git
* Integrating the use of classes

## User Operation Instructions
* Open and run main.cpp
* Enter name when prompted
* Game relies on inputting 1 or 2.
* Some unit testing tequires user-input. Please read instructions printed out for unit tests.

<!-- Add information about your project.
Such as detailed description, known bugs and user operation instructions.
This is the file a user will first look at when attempting to run your program. -->

## Terminal Commands

Build and run the program.

```sh
make
```

Clean out build files.

```sh
make clean
```

Build and run test program.

```sh
make DRIVER=src/test_driver.cpp
```

Clean out test build files.

```sh
make DRIVER=src/test_driver.cpp clean
```
