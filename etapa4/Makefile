etapa3: .FORCE
	flex scanner.l
	bison -d parser.y
	gcc -c lex.yy.c parser.tab.c ast.c
	gcc -c main.c	
	gcc -o etapa3 lex.yy.o parser.tab.o main.o ast.o

etapa1MAC: .FORCE
	flex scanner.l
	gcc -c main.c
	gcc -c lex.yy.c
	gcc -o etapa1 lex.yy.o main.o



.FORCE:

clean:
	rm -f lex.yy.c
	rm *.o

