// Caden Miller
// 12/02/23
// Project 2
// Description: The file contains the class for a subexpression with 3 operands.
class Ternary: public SubExpression {
public:
    Ternary(Expression* left, Expression* right, Expression* third): SubExpression(left, right, third) {
        
    }
    double evaluate()  {
       if(left->evaluate() != 0){
            return right->evaluate();
       }
       return third->evaluate();
    }
};