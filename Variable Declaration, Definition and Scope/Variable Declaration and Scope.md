1. Consider the following two C lines

   ```c
   int var1;
   extern int var2;
   ```

   **First statement declares and defines var1, but second statement only declares var2**

   

2. Predict the output

   ```c
   #include <stdio.h>
   int var = 20;
   int main()
   {
       int var = var;
       printf("%d ", var);
       return 0;
   }
   ```

   <u>Garbage Value</u>

   **First var is declared, then value is assigned to it. As soon as var is declared as a local variable, it hides the global variable var.**

   

3. ```c
   #include <stdio.h>
   extern int var;
   int main()
   {
       var = 10;
       printf("%d ", var);
       return 0;
   }
   ```

   <u>Compiler Error: var is not defined</u>

   **var is only declared and not defined (no memory allocated for it)**

   

4. ```c
   #include <stdio.h>
   extern int var = 0;
   int main()
   {
   	var = 10;
       printf("%d", var);
       return 0;
   }
   ```

   <u>10</u>

   **If a variable is only declared and an initializer is also provided with that declaration, then the memory for that variable will be allocated i.e. that variable will be considered as defined.**

   

5. ```c
   #include <stdio.h>
   int main()
   {
       {
           int var = 10;
       }
       {
           printf("%d", var);
       }
       return 0;
   }
   ```

   <u>Compiler Error</u>

   **var is not accessible. The curly brackets define a block of scope. Anything declared between curly brackets goes out of scope after the closing bracket.**

   

6. ```c
   #include <stdio.h>
   int main()
   {
   	int x = 1, y = 2, z = 3;
     	printf(" x = %d, y = %d, z = %d\n", x, y, z);
     	{
         	int x = 10;
       	float y = 20;
          	printf(" x = %d, y = %f, z = %d\n", x, y, z);
          	{
           	int z = 100;
               printf(" x = %d, y = %f, z = %d\n", x, y, z);
          	}
     	}
     	return 0;
   }
   ```

   <u>x = 1, y = 2, z = 3</u>

   <u>x = 10, y = 20.000000, z = 3</u>

   <u>x = 10, y = 20.000000, z = 100</u>

   

7. ```c
   int main()
   {
       int x = 032;
       printf("%d", x);
       return 0;
   }
   ```

   <u>26</u>

   **When a constant value starts with 0, it is considered as octal number. Therefore the value of x is 3*8 + 2 = 26**

   

8. Consider the following C program, which variable has the longest scope?

   ```c
   int a;
   int main()
   {
       int b;
       // ..
       // ..
   }
   int c;
   ```

   <u>a</u>

   **a is accessible everywhere. b is limited to main() c is accessible only after its declaration.**

   

9. Consider the following variable declarations and definitions in C

   i)	int var_9 = 1;

   ii)   int 9_var = 2;

   iii)  int _ = 3;

   <u>Both i) and iii) are valid</u>

   **In C language, a variable name can consists of letters, digits and underscore i.e. _ . But a variable name has to start with either letter or underscore. It can't start with a digit. So valid variables are var_9 and _ from the above question. Even two back to back underscore i.e. __ is also a valid variable name. Even _9 is a valid variable. But 9var and 9_ are invalid variables in C. This will be caught at the time of compilation itself. **

   

10. Find out the correct statement for the following program.

    ```c
    #include <stdio.h>
    
    int main()
    {
    	int* lPtr = NULL;
        if(gPtr = lPtr)
        {
            printf("Equal!");
        }
        else
        {
            pritf("Not Equal");
        }
        
        return 0;
    }
    ```

    <u>It'll always print Equal.</u>

    **It should be noted that global variables such gPtr (which is a global pointer to int) are initialized to ZERO. That’s why gPtr (which is a global pointer and initialized implicitly) and lPtr (which a is local pointer and initialized explicitly) would have same value i.e.**

    

11. Consider the program below in a hypothetical language which allows global variable and a choice of call by reference or call by value methods of parameter passing.

    ```c
    int i;
    program main()
    {
        int j = 60;
        i = 50;
        call f(i, j);
        print i, j;
    }
    procedure f(x, y)
    {
        i = 100;
        x = 10;
        y = y + i;
    }
    ```

    <u>Call by value: i = 100, j = 60; Call by reference: i = 10, j = 70</u>

    **Call by value: A copy of parameters will be passed and whatever updations are performed will be valid only for that copy, leaving original values intact.**

    **Call by reference: A link to original variables will be passed, by allowing the function to manipulate the original variables.**

    

12. ```c
    #include <stdio.h>
    int main()
    {
        int i;
        for(i=0; i<5; i++)
        {
            int i = 10;
            printf("%d ", i);
            i++;
        }
        return 0;
    }
    ```

    <u>10 10 10 10 10</u>

    

13. What is the output of the following program?

    ```c
    #include <stdio.h>
    int tmp = 20;
    int main()
    {
        printf("%d ", tmp);
        func();
        printf("%d ", tmp);
    }
    func()
    {
        static int tmp = 10;
        printf("%d ", tmp);
    }
    ```

    <u>20 10 20</u>

    **Main() is the entry section of the program. First print statement will print the value of tmp = 20. Then after the function is called the 10 will be printed. After that control returns to the main function and again 20 will be printed. **

    

14. Given i = 0, j = 1, k = -1, x = 0.5, y = 0.0 

    What is the output of given 'C' expression? x * 3 && 3 || j | k

    ```c
     x * 3 && 3 || j | k
    =1.5 && 3 || j | k
    =1 || j | k
    =1
    ```

    

15. Assume that the program ‘P’ is implementing parameter passing with ‘call by reference’. What will be printed by following print statements in P? Program P( ) { x = 10; y = 3; funb (y, x, x) print x; print y; } funb (x, y, z) { y = y + 4; z = x + y + z; }

    <u>31, 3</u>

    

16. In call-by-value, anything that is passed into a function call is unchanged in the caller’s scope when the function returns. **Correct.**

    In call-by-reference, a function receives implicit reference to a variable used as argument. **Correct.**

    In call-by-reference, caller is unable to see the modified variable used as argument. **Incorrect.**

