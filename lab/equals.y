%{
#include<stdio.h>
#include<stdlib.h>
int yylex(void);
int yyerror(char *);
%}
%token A B NL
%%
stmt: S NL {printf("valid string\n");exit(0);}
    ;
S: A S B 
  |
  ;
%%
int yyerror(char *msg)
 {
 printf("Invalid string\n");
 exit(0);
 }
int main(void)
{
 printf("enter the string\n");
 yyparse();
}