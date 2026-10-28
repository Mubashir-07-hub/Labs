
%{
#include <stdio.h>
int words = 0, lines = 0;
%}

%%
\n              { lines++; }
[ \t]+          ;
[A-Za-z0-9]+    { words++; }
%%

int yywrap()
{
    return 1;
}

int main()
{
    yyin = fopen("input.txt", "r");

    if (yyin == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    yylex();

    printf("Number of words = %d\n", words);
    printf("Number of lines = %d\n", lines);

    fclose(yyin);
    return 0;
}
