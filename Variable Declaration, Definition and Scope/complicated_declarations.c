#include <stdio.h>

// fp * () int
// fp is pointer to function returning int
int (*fp)();
int func(void) {printf("hello\n");}

// daytab * [13] int
// daytab is pointer to array of 13 integers
int (*daytab)[13];
int arr1[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

// f[10] * (int, int) void
// f is an array of 10 pointer to function
// (which takes 2 arguments of type int) returning void
void (*f[10])(int, int);
void func1(int a, int b)
{
	printf("func1 = %d, %d\n", a, b);
}
void func2(int p, int q)
{
	printf("func2 = %d, %d\n", p, q);
}
void func3(int x, int y)
{
	printf("func3 = %d, %d\n", x, y);
}

// x() * [] * () char
// x is function returning pointer to array of pointer to 
// function returning char
char (*(*x())[]) ();
char func4() { return 'a'; }
char func5() { return 'b'; }
char func6() { return 'c'; }

char (*xarr[])() = { func4, func5, func6 };
char (*(*x())[])() { return &xarr; }

// x[3] * () * [5] char
// x is an array of 3 pointers to function 
// returning pointer to array of 5 char's
char (*(*a[3])())[5];
typedef char charray5[5];

charray5 carr1 = {'a', 'b', 'c', 'd', '\0'};
charray5 carr2 = {'q', 'w', 'e', 'r', '\0'};
charray5 carr3 = {'x', 'y', 'z', 'w', '\0'};

charray5* func7() { return &carr1; }
charray5* func8() { return &carr2; }
charray5* func9() { return &carr3; }

char (*(*a[3])())[5] = { func7, func8, func9 };

// arr[5] * () * () * int
// arr is an array of 5 pointers to functions 
// returning pointer to function returning pointer to integer
int *(*(*arr[5])()) ();
int i = 1;
int j = 2;
int* func10() { return &i; }
int* func11() { return &j; }

int* (*funcp1())() { return func10; }
int* (*funcp2())() { return func11; }
int* (*(*arr[5])())() = { funcp1, funcp2 };

// bsd_signal(int sig, void (*func)(int)) * (int) void
// bsd_signal is a function 
// that takes integer & a pointer to a function 
// (that takes integer as argument and returns void) 
// and returns pointer to a function
// (that take integer as argument and returns void)
void (*bsd_signal(int sig, void (*func)(int)))(int);

void on_sig10_exit(int u) { printf("sig10 exit\n"); }
void on_sig20_exit(int u) { printf("sig20 exit\n"); }
void default_exit(int u) { printf("default exit\n"); }
void user_default_exit(int u)
{
	printf("user default exit\n");
}

void (*exit_by)(int);

void (*bsd_signal(int sig, void (*func)(int)))(int)
{
	switch (sig) {
	case 10:
		return on_sig10_exit;
	case 20:
		return on_sig20_exit;
	default:
		if (func == NULL)
			return default_exit;
		else
			return user_default_exit;
	}
}


int main(int argc, char const *argv[])
{
	fp = func;
	(*fp)();
	fp();

	daytab = &arr1;
	printf("arr[2] = %d\n", (*daytab)[2]);

	f[0] = func1;
	f[1] = func2;
	f[2] = func3;
	f[0](1, 2);
	f[1](3, 4);
	f[2](5, 6);
	(*f[0])(1, 2);
	(*f[1])(3, 4);
	(*f[2])(5, 6);

	printf("%c\n", ((*(x()))[0])());
	printf("%c\n", ((*(x()))[1])());
	printf("%c\n", ((*(x()))[2])());

	printf("func1 = [%c, %c, %c, %c]\n",
           ((*(a[0]))())[0][0], ((*(a[0]))())[0][1],
           ((*(a[0]))())[0][2], ((*(a[0]))())[0][3]);
    printf("func2 = [%c, %c, %c, %c]\n",
           ((*(a[1]))())[0][0], ((*(a[1]))())[0][1],
           ((*(a[1]))())[0][2], ((*(a[1]))())[0][3]);
    printf("func3 = [%c, %c, %c, %c]\n",
           ((*(a[2]))())[0][0], ((*(a[2]))())[0][1],
           ((*(a[2]))())[0][2], ((*(a[2]))())[0][3]);

    printf("%d\n", *(*(*arr[0])())());
    printf("%d\n", *(*(*arr[1])())());

    (bsd_signal(10, NULL))(0);
    (bsd_signal(20, NULL))(0);
    (bsd_signal(30, NULL))(0);
    (bsd_signal(30, user_default_exit))(0);

	return 0;
}