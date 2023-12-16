// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the implementation for the parseName function

// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the function parseName. That function consumes all alphanumeric 
// characters until the next whitespace and returns the name that those characters form.

#include <cctype>
#include <sstream>
#include <string>
#include<iostream>
using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    char alnum;
    string name = "";

    in >> ws;
    
    while (isalnum(in.peek()) || in.peek() == '_') {
        in >> alnum;
        name += alnum;
    }
    return name;
}