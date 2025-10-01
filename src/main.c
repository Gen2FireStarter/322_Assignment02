char * AUTHOR_NAME = (char *) "Dylan McDonough";
char * AUTHOR_AUTHORSHIP = (char *) "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy. I understand the seriousness and implications of plagiarism.";


//#define clearBuffer() while (getchar() != '\n');
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "math_ops.h"

//#include "tests\tests.c"
// ----------------- MAIN PROGRAM -----------------

int main(int argc, char *argv[]) 
{

// To change the command-line parameters, modify the following line:
// lanuch.json.10:
// "args": ["--help"], 
// "args": ["--subtraction", "5", "3.0"] , // argues! attention not ["--subtraction 5 3.0"] <-- whole string in argv[1]!!!
// etc.

    int failed_tests  = 0;

    if (argc > 1 )
    {
        if(strcmp(argv[1], "--author") == 0) 
            printf("author"); //printf(AUTHOR_NAME);
        else if(strcmp(argv[1], "--authorship") == 0) 
           printf("AUTHOR"); //printf(AUTHOR_AUTHORSHIP);
        else if(strcmp(argv[1], "--help") == 0) 
        {
            printf("\nOptions:\n");
            printf("  --author             Print author name\n");
            printf("  --authorship         Print academic honesty statement\n");
            printf("  --add a b       Add two numbers\n");
            printf("  --sub a b    Subtract two numbers\n");
            printf("  --multiply a b Multiply two numbers\n");
            printf("  --divide a b       Divide two numbers\n");
            printf("  --power a b          Raise a to the power of b\n");
            printf("  --square a           Square of a number\n");
            printf("  --cube a             Cube of a number\n");
            printf("  --sin a             Sin of a number\n");
            printf("  --cos a            Cos of a number\n");
        }
        else if(strcmp(argv[1], "--add") == 0) 
        {
            float result = add(atof(argv[2]), atof(argv[3]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--sub") == 0) 
        {
            float result = sub(atof(argv[2]), atof(argv[3]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--multiply") == 0) 
        {
            float result = multiply(atof(argv[2]), atof(argv[3]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--divide") == 0) 
        {
            float result = divide(atof(argv[2]), atof(argv[3]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--power") == 0) 
        {
            float result = mypow(atof(argv[2]), atoi(argv[3]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--square") == 0) 
        {
            float result = square(atof(argv[2]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--cube") == 0) 
        {
            float result = cube(atof(argv[2]));
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--sin") == 0) 
        {
            float result = mysin(atoi(argv[3]), 10);
            printf("%f\n", result);
        }
        else if(strcmp(argv[1], "--cos") == 0) 
        {
            float result = mycos(atoi(argv[3]), 10);
            printf("%f\n", result);
        }
    }
    else
    {
        printf("Wrong parameter. Use --help to see available options.\n");
        return 1; // Wrong parameter
    }

    getchar(); // pause before exit (Windows)

    return failed_tests; // cmd/powershell:  echo $LASTEXITCODE
}

