
%{
#include <stdio.h>
%}

%%
^[0-9]+$                { printf("Valid Integer Constant\n"); }
^[0-9]+\.[0-9]+$        { printf("Valid Floating Constant\n"); }
^[-+]?[0-9]+$           { printf("Valid Integer Constant\n"); }
^[-+]?[0-9]+\.[0-9]+$   { printf("Valid Floating Constant\n"); }
.*                       { printf("Invalid Constant\n"); }
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter a Constant: ");
    yylex();
    return 0;
}
