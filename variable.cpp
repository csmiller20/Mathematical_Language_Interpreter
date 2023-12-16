// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the implementation of the variable class
// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up te value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

double Variable::evaluate() {
    return symbolTable.lookUp(name);
}