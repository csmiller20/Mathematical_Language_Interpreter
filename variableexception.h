// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains a custom exception class for variables
#include<exception>
#include<string>
class VariableException: public std::exception {
public:
    VariableException(std::string s) 
    {
        message = s;
    }
    std::string showMessage() 
    {
        return message;
    };
private:
    std::string message;
};