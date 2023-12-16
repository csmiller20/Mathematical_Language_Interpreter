# Mathematical_Language_Interpreter
This program reads in code from a file, parses it, then executes it.
Input file must be named "input.txt"
In the input file (input language):
  + is add
  - is subtract
  * is multiply
  / is divide
  ^ is exponent
  & is average
  > is maximum
  < is minimum
  % is remainder
  ? is a ternary operator, returns operand 3 if evaluated ==0, else returns operand 2. (operand1 ? operand2 operand3)
  # is a quaternary operator, returns operand 2 if evaluated < 0, operand 3 if == 0, and operand 4 if > 0.(operand1 # operand2     operand3 operand4)
  ~ is a unary operator, negates the operand
  
Steps: use these commands to compile and run the program
  1. make
  2. ./project2
