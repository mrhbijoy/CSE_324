%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char*);
%}
%token INTEGER
%%
program:
        program: expr '\n' { printf("Result: %d\n", $2); }
        |
        ;
expr:
        INTEGER { $$ = $1; }
        | expr '+' expr { $$ = $1 + $3; }
        | expr '-' expr { $$ = $1 - $3; }
        | expr '*' expr { $$ = $1 * $3; }
        | expr '/' expr { $$ = $1 / $3; }
        | '(' expr ')' { $$ = $2; }
        ;
%%
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int main(void) {
    yyparse();
    return 0;
}
