// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the implementation of the class symbol table

// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "symboltable.h"
#include "variableexception.h"

void SymbolTable::insert(string variable, double value) {
    const Symbol& symbol = Symbol(variable, value);
    for(Symbol s : elements){
        if(s.variable.compare(variable) == 0){
            throw VariableException("VARIABLE \"" + variable + "\" WAS INITIALIZED MULTIPLE TIMES");
        }
    }
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    throw VariableException("USE OF UNINITIALIZED VARIABLE \"" + variable + "\"");
    return -1;
}

void SymbolTable::erase() {
    elements.clear();
}

