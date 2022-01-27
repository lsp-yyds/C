#include <stdio.h>

// Global variable
int global = 5;

// global variable accessed from 
// within a function
void display()
{
	printf("%d\n", global);
}

int num1;

int Sub(int num1, int num2)
{
	return (num1 - num2);
}

void func1()
{
	{
		goto label_exec;

	label_exec:;
	}

	// label ignores block scope
	goto label_exec;
}

void func2()
{
	// throwserror
	//goto label_exec;
}

int main(int argc, char const *argv[])
{
	printf("Before change within main: ");
	display();

	// changing value of global
	// variable from main function
	printf("After change within main: ");
	global = 10;
	display();

	{
		int x = 10, y = 20;
        {
            // The outer block contains
            // declaration of x and
            // y, so following statement
            // is valid and prints
            // 10 and 20
            printf("x = %d, y = %d\n", x, y);
            {
                // y is declared again,
                // so outer block y is
                // not accessible in this block
                int y = 40;
 
                // Changes the outer block
                // variable x to 11
                x++;
 
                // Changes this block's
                // variable y to 41
                y++;
 
                printf("x = %d, y = %d\n", x, y);
            }
 
            // This statement accesses
            // only outer block's
            // variables
            printf("x = %d, y = %d\n", x, y);
        }
	}

	printf("%d\n", Sub(10, 5));

	return 0;
}