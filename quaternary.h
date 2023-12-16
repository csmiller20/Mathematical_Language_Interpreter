// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the class for subexpressions with 4 operands.
class Quaternary: public SubExpression {
public:
    Quaternary(Expression* left, Expression* right, Expression* third, Expression* fourth): SubExpression(left, right, third, fourth) {
    }
    double evaluate()  {
       if(left->evaluate() < 0){
            return right->evaluate();
       }
       else if(left->evaluate() == 0){
            return third->evaluate();
       }
       return fourth->evaluate();
    }
};