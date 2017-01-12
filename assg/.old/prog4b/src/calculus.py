from sympy import *
from sympy.parsing.sympy_parser import parse_expr

file = open('functions.txt', 'r');
strexprs = file.readlines();

x = Symbol('x')
for strexpr in strexprs:
    expr = parse_expr(strexpr, evaluate=False); 
    pprint(expr); 
    #print latex(expr);
    print "\n"
