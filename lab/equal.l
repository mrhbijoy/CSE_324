%{
#include<stdio.h>
#include "y.tab.h"
int yyerror(char *);
%}
%%
[aA] {return A;}
[bB] {return B;}
\n {return NL;}
. {return yytext[0];}
%%
int yywrap()
{
return 1;
}