// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the implementation of the class for a subexpression
// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "modulo.h"
#include "exponent.h"
#include "lessthan.h"
#include "greaterthan.h"
#include "and.h"
#include "negation.h"
#include "ternary.h"
#include "quaternary.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* third) {
    this->left = left;
    this->right = right;
    this->third = third;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* third, Expression* fourth) {
    this->left = left;
    this->right = right;
    this->third = third;
    this->fourth = fourth;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    Expression* third;
    Expression* fourth;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;

    switch (operation){
        case '~':
            in >> paren;
            return new Negation(left);
    }

    right = Operand::parse(in);

    switch (operation)
    {
        case '?':
            third = Operand::parse(in);
            in >> paren;
            return new Ternary(left, right, third);
        case '#':
            third = Operand::parse(in);
            fourth = Operand::parse(in);
            in >> paren;
            return new Quaternary(left, right, third, fourth);
    }

    in >> paren;

    switch (operation) {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Multiply(left, right);
        case '/':
            return new Divide(left, right);
        case '&':
            return new And(left, right);
        case '^':
            return new Exponent(left, right);
        case '>':
            return new GreaterThan(left, right);
        case '<':
            return new LessThan(left, right);
        case '%':
            return new Modulo(left, right);
        case '?':
            return new Ternary(left, right, third);
        case '#':
            return new Quaternary(left, right, third, fourth);
    }
    return 0;
}
        