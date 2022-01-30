# Understanding Linkage in C/C++

## No Linkage

- variables that are NOT explicitly declared extern or static
- local classes and their member functions
- other names declared at block scope such as typedefs, enumerations, and enumerators

Names not specified with external, or internal linkage also have no linkage, regardless of which scope they are declared in.

Name of variable with No-linkage is present only upto compilation I.e after compilation, there is no such name exists in program.

## Internal linkage

Here, the name can be referred to from all scopes in the current translation unit.

- variables, functions, or function templates declared static
- non-volatile, non-inline, const-qualified variables (including constexpr) that aren't declared extern and aren't previously declared to have external linkage
- data members of anpnymous unions
- names declared in an unnamed namespace or in a namespace nested within an unnamed namespace

## External linkage

Here, the name can be referred to from the scopes in the other translation units.

Any of the following names declared a+ namespace scope have external linkage

- functions not declared static
- namespace-scope non-const variables not declared static
- and any variables declared extern

Note: if the name is declared in an unnamed namespace or in a namespace nested within an unnamed namespace, the name has internal linkage.