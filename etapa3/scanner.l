/*
	Nomes: Anderson Rieger da Luz e Gabriel Fagundes da Fonseca
	Grupo: E
*/

%option noyywrap
%option yylineno
%{
#include <stdio.h>
#include "ast.h"
#include "parser.tab.h"

%}

white [ \t]+
digit [0-9]
integer ({digit})+
float ({integer})("."{integer})
special [-\[\]+*/<>=!%^]
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
"int"     { return TK_PR_INT;}
"float"   { return TK_PR_FLOAT;}
"bool"    { return TK_PR_BOOL;}
"char"    { return TK_PR_CHAR;}
"if"      { return TK_PR_IF;}
"then"    { return TK_PR_THEN;}
"else"    { return TK_PR_ELSE;}
"while"   { return TK_PR_WHILE;}
"input"   { return TK_PR_INPUT;}
"output"  { return TK_PR_OUTPUT;}
"return"  { return TK_PR_RETURN;}
"for"     { return TK_PR_FOR;}

"<="      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_LE;}
">="      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_GE;}
"=="      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_EQ;}
"!="      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_NE;}
"&&"      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_AND;}
"||"      {yylval.valor_lexico = create_value(VAL_OP_COMP,strdup(yytext),yylineno); return TK_OC_OR;}

{float}   {yylval.valor_lexico = create_value(VAL_LIT_FLOAT,strdup(yytext),yylineno); return TK_LIT_FLOAT;}
{integer} {yylval.valor_lexico = create_value(VAL_LIT_INT,strdup(yytext),yylineno); return TK_LIT_INT;}
"false"   {yylval.valor_lexico = create_value(VAL_LIT_BOOL,strdup(yytext),yylineno); return TK_LIT_FALSE;}
"true"    {yylval.valor_lexico = create_value(VAL_LIT_BOOL,strdup(yytext),yylineno); return TK_LIT_TRUE;}
{special} {yylval.valor_lexico = create_value(VAL_SPEC,strdup(yytext),yylineno); return yytext[0];}
[a-zA-Z]+     { yylval.valor_lexico = create_value(VAL_IDENTIFICADOR,strdup(yytext),yylineno); return TK_IDENTIFICADOR;}
"'"."'"   {yylval.valor_lexico = create_value(VAL_LIT_CHAR,strdup(yytext),yylineno); return TK_LIT_CHAR;}
"{" 	  {return yytext[0]; }
"}" 	  {return yytext[0]; }
"(" 	  {return yytext[0]; }
")" 	  {return yytext[0]; }
";" 	  {return yytext[0]; }
"," 	  {return yytext[0]; }
.         {return TK_ERRO;}

%% 

int get_line_number(){
	return yylineno; //Precisa considerar \n nos comentarios também
	
}


