/*
	Nomes: Anderson Rieger da Luz e Gabriel Fagundes da Fonseca
	Grupo: E
*/

%option noyywrap
%option yylineno
%{
# include <stdio.h>
#include "ast.h"
#include "parser.tab.h"

%}

white [ \t]+
digit [0-9]
integer ({digit})+
float ({integer})("."{integer})
special [-,;:\(\)\[\]\{\}+*/<>=!%^]
char [A-z]

%x IN_COMMENT
%x COMMENT_LINE
%%
<INITIAL>{
"/*"              BEGIN(IN_COMMENT);
"//"		  BEGIN(COMMENT_LINE);
}
<IN_COMMENT>{
	"*/" BEGIN(INITIAL);
	.  { }
	\n { }
}
<COMMENT_LINE>{
	"\n" BEGIN(INITIAL);
	. { }
}
{white}   { }
"\n" 	  { }
"int"     {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_INT;}
"float"   {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_FLOAT;}
"bool"    {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_BOOL;}
"char"    {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_CHAR;}
"if"      {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_IF;}
"then"    {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_THEN;}
"else"    {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_ELSE;}
"while"   {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_WHILE;}
"input"   {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_INPUT;}
"output"  {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_OUTPUT;}
"return"  {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_RETURN;}
"for"     {yylval.valor_lexico = create_value(VAL_PR,yytext,yylineno); return TK_PR_FOR;}

"<="      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_LE;}
">="      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_GE;}
"=="      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_EQ;}
"!="      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_NE;}
"&&"      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_AND;}
"||"      {yylval.valor_lexico = create_value(VAL_OP_COMP,yytext,yylineno); return TK_OC_OR;}

{float}   {yylval.valor_lexico = create_value(VAL_LIT_FLOAT,yytext,yylineno); return TK_LIT_FLOAT;}
{integer} {yylval.valor_lexico = create_value(VAL_LIT_INT,yytext,yylineno); return TK_LIT_INT;}
"false"   {yylval.valor_lexico = create_value(VAL_LIT_BOOL,yytext,yylineno); return TK_LIT_FALSE;}
"true"    {yylval.valor_lexico = create_value(VAL_LIT_BOOL,yytext,yylineno); return TK_LIT_TRUE;}
{special} {yylval.valor_lexico = create_value(VAL_SPEC,yytext,yylineno); return yytext[0];}
[a-zA-Z]+     { yylval.valor_lexico = create_value(VAL_IDENTIFICADOR,yytext,yylineno); return TK_IDENTIFICADOR;}
"'"."'"   {yylval.valor_lexico = create_value(VAL_LIT_CHAR,yytext,yylineno); return TK_LIT_CHAR;}

.         {return TK_ERRO;}

%% 

int get_line_number(){
	return yylineno; //Precisa considerar \n nos comentarios também
	
}


