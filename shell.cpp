/*************************************
 * ***********************************
Name      : Govher Sapardurdyyeva    *
Class     : CSC 456                  *
Assignment: Programming Assignment 1 *
Instructor: Dr. Juang                *
Due Date  : November 2, 2025         *
**************************************
**************************************/
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;
int main() {
    string input;
    const string prompt = "sapardurdyyeva>";

    while (true) {
        cout << prompt;
        getline(cin, input);

        // Exit condition
        if (input == "exit") {
            cout << "Bye!" << endl;
            break;
        }

        // Ignore empty input
        if (input.empty()) continue;

        // Parse the input into tokens (command + arguments)
        stringstream ss(input);
        vector<string> args;
        string arg;
        while (ss >> arg) {
            args.push_back(arg);
        }

        // Convert vector<string> to char* array for execvp
        vector<char*> argv;
        for (auto &s : args) {
            argv.push_back(&s[0]);
        }
        argv.push_back(nullptr);

        pid_t pid = fork();  // Create a child process

        if (pid < 0) {
            cerr << "Error: fork failed" << endl;
            continue;
        } 
        else if (pid == 0) {
            // Child process executes the command
            if (execvp(argv[0], argv.data()) == -1) {
                perror("Error executing command");
            }
            exit(EXIT_FAILURE);
        } 
        else {
            // Parent waits for child to finish
            int status;
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}
