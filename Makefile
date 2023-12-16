# Caden Miller
# 12/02/23
# Project 2
# Description: The file compiles all the source code by running the command "make"
project2: project2.o subexpression.o symboltable.o variable.o operand.o parse.o
	g++ -o project2 project2.o subexpression.o symboltable.o variable.o operand.o parse.o
	rm *.o

project2.o: project2.cpp expression.h subexpression.h symboltable.h parse.h variableexception.h
	g++ -c project2.cpp

subexpression.o: subexpression.cpp subexpression.h expression.h operand.h plus.h minus.h multiply.h divide.h and.h exponent.h greaterthan.h lessthan.h modulo.h ternary.h quaternary.h negation.h
	g++ -c subexpression.cpp

symboltable.o: symboltable.cpp symboltable.h variableexception.h
	g++ -c symboltable.cpp

variable.o: variable.cpp variable.h expression.h operand.h symboltable.h
	g++ -c variable.cpp

operand.o: operand.cpp operand.h expression.h subexpression.h variable.h literal.h parse.h
	g++ -c operand.cpp

parse.o: parse.cpp parse.h
	g++ -c parse.cpp