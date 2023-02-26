etapa3: .FORCE
	flex scanner.l
	bison -d parser.y
	gcc -c lex.yy.c parser.tab.c ast.c hashmap.c stack.c array.c
	gcc -c main.c
	gcc -o etapa4 lex.yy.o parser.tab.o main.o ast.o hashmap.o stack.o array.o 

etapa1MAC: .FORCE
	flex scanner.l
	gcc -c main.c
	gcc -c lex.yy.c
	gcc -o etapa1 lex.yy.o main.o



.FORCE:

clean:
	rm -f lex.yy.c
	rm *.o

