#------------------------------------------------------------------------------
# Makefile for Expression Tree to build a postfix calculator
#------------------------------------------------------------------------------

ADT_NAME  =  ExpTree
ADT_DEPENDENCIES = Stack
SOURCES   = $(ADT_NAME).c  $(ADT_DEPENDENCIES).c  $(ADT_NAME)Client.c
OBJECTS   = $(ADT_NAME).o  $(ADT_DEPENDENCIES).o   $(ADT_NAME)Client.o
HEADERS   = $(ADT_NAME).h  $(ADT_DEPENDENCIES).h
EXEBIN    = PostFixCalculator
FLAGS     = -std=c99 -Wall

all: $(EXEBIN)

$(EXEBIN) : $(OBJECTS) $(HEADERS)
	gcc -o $(EXEBIN) $(OBJECTS)

$(OBJECTS) : $(SOURCES) $(HEADERS)
	gcc -c $(FLAGS) $(SOURCES)

clean :
	rm -f $(EXEBIN) $(OBJECTS)

check:
	valgrind --leak-check=full $(EXEBIN) 
