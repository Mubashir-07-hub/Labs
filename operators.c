
%{
#include <stdio.h>
%}

%%
[+\-*/%]       { printf("Arithmetic operator\n"); }
[<>]=?|==|!=   { printf("Relational operator\n"); }
[=]            { printf("Assignment operator\n"); }
"&&"|"||"|"!"  { printf("Logical operator\n"); }
"++"|"--"      { printf("Increment / Decrement operator\n"); }
.              { printf("Not an operator\n"); }
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter an operator: ");
    yylex();
    return 0;
}
