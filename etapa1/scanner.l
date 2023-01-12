%option noyywrap
%option yylineno
%{
# include <stdio.h>
# include "tokens.h"

%}

white [ \t]+
digit [0-9]
integer ({digit})+
float ({integer})("."{integer})$
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
"//"	  	
"int"     {return TK_PR_INT;}
"float"   {return TK_PR_FLOAT;}
"bool"    {return TK_PR_BOOL;}
"char"    {return TK_PR_CHAR;}
"if"      {return TK_PR_IF;}
"then"    {return TK_PR_THEN;}
"else"    {return TK_PR_ELSE;}
"while"   {return TK_PR_WHILE;}
"input"   {return TK_PR_INPUT;}
"output"  {return TK_PR_OUTPUT;}
"return"  {return TK_PR_RETURN;}
"for"     {return TK_PR_FOR;}

"<="      {return TK_OC_LE;}
">="      {return TK_OC_GE;}
"=="      {return TK_OC_EQ;}
"!="      {return TK_OC_NE;}
"&&"      {return TK_OC_AND;}
"||"      {return TK_OC_OR;}

{integer} {return TK_LIT_INT;}
{float}   {return TK_LIT_FLOAT;}
"false"   {return TK_LIT_FALSE;}
"true"    {return TK_LIT_TRUE;}
{special} {return yytext[0];}
[a-zA-Z]+     {return TK_IDENTIFICADOR;}
"'"."'"   {return TK_LIT_CHAR;}

.         {return TK_ERRO;}

%% 

int get_line_number(){
	return yylineno; //Precisa considerar \n nos comentarios também
	
}

