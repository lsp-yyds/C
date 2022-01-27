#include <stdio.h>

int main(int argc, char const *argv[])
{
	// \a escape sequence
	printf("My mobile number "
		"is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
	printf("\n");

	// \b escape sequence
	/* \b - backspace character transfers
    the cursor one character back with 
    or without deleting on different compilers.*/
    printf("Hello Geeks\b\b\b\bF");
    printf("\n");

    // \n escape sequence
    /* Here we are using \n, which is a new 
    line character. */
    printf("Hello\n");
    printf("World!");
    printf("\n");

    // \t escape sequence
    /* Here we are using \t, which is a horizontal
    tab character. It will provide a tab space between
    two words. */
    printf("Hello \t World!");
    printf("\n");

    // \v escape sequence
    /* Here we are using \v, which
    is vertical tab character.*/
    printf("Hello friends");
    printf("\v Welcome to WWE");
    printf("\n");

    // \r escape sequence
    /* Here we are using \r, which
     is carriage return character.*/
    printf("Hello fri \r ends");
    printf("\n");

    // \\(Backslash) escape sequence
    /* It contains two escape sequence
    means \ and \n */
    printf("Hello\\WWE");
    printf("\n");

    printf("\' Hello WWE\n");
    printf("\" Hello WWE");
    printf("\n");

    // \? escape sequence
    /* Here we are using \?,  which is 
    used for the presentation of trigraph
    in the early of C programming. */
    printf("\?\?!\n");

    // \OOO escape sequence
    char* s = "A\0725";
    printf("%s", s);
    printf("\n");

    // \XHH escape sequence
    s = "B\x4a";
    printf("%s", s);
    printf("\n");

	return 0;
}