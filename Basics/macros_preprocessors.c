#include <stdio.h>
#define INCREMENT(x) ++x
#define MULTIPLY(a, b) a*b
#define MULTIPLYS(a, b) (a)*(b)
#define merge(a, b) a##b
#define get(a) #a
#define PRINT(i, limit)			\
	while (i < limit) {			\
		printf("GeeksQuiz ");	\
		i++;					\
	}
//#define square(x) x*x
#define	SQUARE(x) (x*x)
#define LIMIT 1000
float div(float, float);
#define div(x, y) x/y

static inline int square(int x){
	return x * x;
}

int main(int argc, char const *argv[])
{
	char* ptr = "GeeksQuiz";
	int x = 10;
	printf("%s ", INCREMENT(ptr));	// eeksQuiz
	printf("%d\n", INCREMENT(x));	// 11
	
	// The macro is expanded as 2 + 3 * 3 + 5, not as 5 * 8
	printf("%d\n", MULTIPLY(2+3, 3+5));
	// The macro is expanded as (2 + 3) * (3 + 5), as 5 * 8
	printf("%d\n", MULTIPLYS(2+3, 3+5));
	
	printf("%d\n", merge(12, 34));
	
	// GeeksQuiz is changed to "GeeksQuiz"
	printf("%s\n", get(GeeksQuiz));
	
	int i = 0;
	PRINT(i, 3);
	printf("\n");
	
	int y = 36 / square(6);
	printf("%d\n", y);
	
	int z = 36 / SQUARE(6);
	printf("%d\n", z);

	#if VERBOSE >= 2
	printf("Trace Message");	//No Output
	#endif

	/*standard macros which can be used to 
	print program file (__FILE__), 
	Date of compilation (__DATE__), 
	Time of compilation (__TIME__) and 
	Line Number in C code (__LINE__)*/
	printf("Current File :%s\n", __FILE__);
	printf("Current Date :%s\n", __DATE__);
	printf("Current Time :%s\n", __TIME__);
	printf("Line Number :%d\n", __LINE__);

	printf("%d\n", LIMIT);
	// removing defined macro LIMIT
	#undef LIMIT
	// Declare LIMIT as integer again
	int LIMIT = 1001;
	printf("%d\n", LIMIT);

	printf("%0.2f\n", div(10.0, 5.0));
	#undef div
	printf("%0.2f", div(10.0, 5.0));

	return 0;
}

float div(float x, float y){
	return y / x;
}