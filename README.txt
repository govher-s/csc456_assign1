***************************************
README – CSC 456 Programming Assignment 1
Name      : Govher Sapardurdyyeva
Instructor: Dr. Huang
Class     : CSC 456 – Operating Systems
Assignment: Programming Assignment 1
Due Date  : November 9, 2025
***************************************
------------------------------------------------------------
1. Supported features:
------------------------------------------------------------
  • Executes standard Linux commands (e.g., ls, cp, mkdir, cat, etc.)
  • Accepts any number of arguments
  • Displays a personalized prompt: sapardurdyyeva>
  • Handles "exit" to terminate the shell and print "Bye!"
  • Supports "clear" as a built-in command to clear the screen


------------------------------------------------------------
2. FILES INCLUDED
------------------------------------------------------------
  • shell.cpp       – Source code for the shell
  • Makefile        – Used to compile the program
  • README.txt      – This documentation file

------------------------------------------------------------
3. HOW TO COMPILE
------------------------------------------------------------
To compile the program, type:

    make

This will create an executable named `shell`.

If you prefer manual compilation:

    g++ shell.cpp -o shell

------------------------------------------------------------
4. HOW TO RUN
------------------------------------------------------------
Run the program from the terminal using:

    ./shell

When running the shell will display the prompt:

    sapardurdyyeva>

You can then enter any Linux command, for example:

    sapardurdyyeva>ls -l
    sapardurdyyeva>mkdir test
    sapardurdyyeva>cat README.txt

To clear the screen:

    sapardurdyyeva>clear

To exit the shell:

    sapardurdyyeva>exit
    Bye!
------------------------------------------------------
