#include<stdio.h>
#include<math.h>

int main() {
    char postfixStr[10], symbol;
    int operandStack[10], top = 0, a = 0, b = 0, i;

    printf("this program for only one digit number operations\n+ - * /  ^(pow) are valid opeators\nEnter PostFix String:-> ");
    gets(postfixStr);

    for (i = 0; postfixStr[i] != '\0'; i++) {
        symbol = postfixStr[i];
        if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^') {
            a = operandStack[--top];
            b = operandStack[--top];
            switch (symbol) {
            case '+': a += b;
                break;
            case '-': a -= b;
                break;
            case '*': a *= b;
                break;
            case '/': a /= b;
                break;
            case '^': a = (int)pow(b, a);
                break;
            default: printf("operator is not arethmetic operator!\n\t+ - * / ^ are valid operator for this evaluation");
                return 0;
            }
            operandStack[top++] = a;
        }
        else
            operandStack[top++] = symbol - 48;
    }
    printf("Output -> %d", operandStack[--top]);
    return 0;
}

/*  output:
        this program for only one digit number operations
        + - * /  ^(pow) are valid opeators
        Enter PostFix String:-> 2121+*^
        Output -> 8     */