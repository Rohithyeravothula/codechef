%{
#include<stdio.h>
%}
%option noyywrap
%%
"+"		{ printf("Tokens: +\n");}
"-"		{ printf("Tokens: -\n");}
[0-9]+  { printf("Tokens: %s\n",yytext);}
" "     {}
";"      {}
[\n|\r\n\t] {}
.       {printf("tokenizing error %c\n",*yytext);yyterminate();}
%%
int main(int argc, char **argv)
{
	yylex();
	return 0;
}