#include <stdio.h>
#include<bits/stdc++.h>
#include <unistd.h>

#define MAX_LINE 40 /* 40 chars per line, per command */

// function declaration

int parse_command(char command[], char *args[]);

int main(void)
{

    char *args[MAX_LINE / 2 + 1]; /* command line has max of 20 arguments */

    int should_run = 1;

    while (should_run)
    {

        printf("osh>");

        fflush(stdout);

        fgets(command, MAX_LINE, stdin); // read in user’s input

        command_length = parse_command(command, args);

        // The function parse_command() needs to be implemented by you

        if (command_length == 0)
        {

            continue;
        }

        if (strcmp(args[0], "exit") == 0)
        {

            break;
        }

        /**

         * After parsing user input, the steps are:

         * (1) fork a child process

         * (2) the child process will invoke execvp()

         * (3) the parent will wait for the child to exit

         */
    }

    return 0;
}