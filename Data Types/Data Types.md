1. ```c
   #include<stdio.h> 
   int  main() 
   { 
      unsigned int x = -1; 
      int y = ~0; 
      if (x == y) 
         printf("same"); 
      else
         printf("not same"); 
      return 0; 
   }
   ```

   <u>same</u>

   **-1 and ~0 essentially have same bit pattern, hence x and y must be same. In the comparison, y is promoted to unsigned and compared against x (See [this ](http://publib.boulder.ibm.com/infocenter/comphelp/v101v121/index.jsp?topic=/com.ibm.xlcpp101.aix.doc/language_ref/cplr066.html)for promotion rules). The result is “same”. However, when interpreted as signed and unsigned their numerical values will differ. x is MAXUNIT and y is -1. Since we have %u for y also, the output will be MAXUNIT and MAXUNIT.**

   

2. Which of the following is not a valid declaration in c?

   ```c
   short int x;
   signed short x;
   short x;
   unsigned short x;
   ```

   <u>All are valid</u>

   

3. ```c
   #include <stdio.h>
    
   int main()
   {
      float c = 5.0;
      printf ("Temperature in Fahrenheit is %.2f", (9/5)*c + 32);
      return 0;
   }
   ```

   <u>Temperature in Fahrenheit is 37.00</u>

   **Since 9 and 5 are integers, integer arithmetic happens in subexpression (9/5) and we get 1 as its value. To fix the above program, we can use 9.0 instead of 9 or 5.0 instead of 5 so that floating point arithmetic happens.**

   

4. ```c
   #include <stdio.h>
   int main()
   {
       char a = 012;
       printf("%d", a);
       return 0;
   }
   ```

   <u>10</u>

   

5. ```c
   int main()
   {
       void *vptr, v;
       v = 0;
       vptr = &v;
       printf("%v", *vptr);
       getchar();
       return 0;
   }
   ```

   <u>Compiler Error</u>

   **void is not a valid type for declaring variables. void * is valid though.**

   

6. Assume that the size of char is 1 byte and negatives are stored in 2's complement form

   ```c
   #include<stdio.h>
   int main()
   {
       char c = 125;
       c = c+10;
       printf("%d", c);
       return 0;
   }
   ```

   <u>-121</u>

   **125 is represented as 01111101 in binary and when we add 10 i.e 1010 in binary it becomes : 10000111. Now what does this number represent? Firstly, you should know that char can store numbers only -128 to 127 since the most significant bit is kept for sign bit. Therefore 10000111 represents a negative number. To check which number it represents we find the 2’s complement of it and get 01111001 which is = 121 in decimal system. Hence, the number 10000111 represents -121.**

   

7. ```c
   #include <stdio.h>
   int main()
   {
       if (sizeof(int) > -1)
           printf("Yes");
       else
           printf("No");
       return 0;
   }
   ```

   <u>No</u>

   **In C, when an integer value is compared with an unsigned it, the int is promoted to unsigned. Negative numbers are stored in 2's complement form and unsigned value of the 2's complement form is much higher than the sizeof int.**

   

8. ```c
   #include<stdio.h>
   int main()
   {
       float x = 0.1;
       if ( x == 0.1 )
           printf("IF");
       else if (x == 0.1f)
           printf("ELSE IF");
       else
           printf("ELSE");
   }
   ```

   <u>ELSE IF</u>

   

9. Suppose a C program has floating constant 1.414, what's the best way to convert this as "float" data type?

   <u>1.414f or 1.411F</u>

   **By default floating constant is of double data type. By suffixing it with f or F, it can be converted to float data type. For more details, this post can be referred [here](http://geeksquiz.com/sizeof-floating-constant-in-c/).**

   

10. In a C program, following variables are defined:

    ```c
    float x = 2.17;
    double y = 2.17;
    long double z = 2.17;
    ```

    <u>printf("%f %lf %Lf",x,y,z);</u>

    **In C language, float, double and long double are called real data types. For “float”, “double” and “long double”, the right format specifiers are %f, %lf and %Lf from the above options. It should be noted that C standard has specified other format specifiers as well for real types which are %g, %e etc.**

    

11. In a C program snippet, followings are used for definition of Integer variables?

    ```c
    signed s;
    unsigned u;
    long l;
    long long ll;
    ```

    <u> All of the above variable definitions are correct because int is implicitly assumed in all of these.</u>

    **Please note that *signed*, *unsigned* and *long* all three are Type specifiers. And *int* is implicitly assumed in all of three. As per C standard, “int, signed, or signed int” are equivalent. Similarly, “unsigned, or unsigned int” are equivalent. Besides, “long, signed long, long int, or signed long int” are all equivalent. And “long long, signed long long, long long int, or signed long long int“ are equivalent.**

