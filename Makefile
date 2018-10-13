cc = gcc
EXE = gameOfThrees

.PHONY : build clean

build : gameOfThrees.o $(EXE)
	@rm gameOfThrees.o

gameOfThrees.o : gameOfThrees.c
	$(cc) -c gameOfThrees.c

$(EXE) : gameOfThrees.o
	$(cc) -o$(EXE) gameOfThrees.o

clean :
	@rm -f gameOfThrees.o
	@rm -f $(EXE)
	@echo 'rm gameOfThrees'
