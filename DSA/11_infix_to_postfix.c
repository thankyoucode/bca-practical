#include<stdio.h>
#define N 10

// stack data strcuture
char oprtStack[N];
int top = 0;

void add(int value) {
    oprtStack[top++] = value;
}

char pop() {
    return oprtStack[--top];
}

int operStage(char oprt) {
    if (oprt == '-' || oprt == '+')
        return 1;
    else if (oprt == '(')
        return 0;
    else
        return 2;
}

int main() {
    char infixExp[N * 2], postfixExp[N * 2];
    int i, postIndex = 0;

    printf("Enter infix expretion: ");
    gets(infixExp);

    for (i = 0; infixExp[i] != '\0'; i++) {
        if ((64 < infixExp[i] && infixExp[i] < 91) || (96 < infixExp[i] && infixExp[i] < 123))
            postfixExp[postIndex++] = infixExp[i];

        // hendle '(', ')'
        else if (infixExp[i] == '(')
            add(infixExp[i]);
        else if (infixExp[i] == ')') {
            while (oprtStack[top - 1] != '(')
                postfixExp[postIndex++] = pop();
            pop();
        }

        else if (operStage(infixExp[i]) > operStage(oprtStack[top - 1]) || top == 0)
            add(infixExp[i]);
        else {
            while (top != 0 && operStage(infixExp[i]) <= operStage(oprtStack[top - 1]))
                postfixExp[postIndex++] = pop();
            add(infixExp[i]);
        }
    }

    while (top != 0)
        postfixExp[postIndex++] = pop();
    postfixExp[postIndex++] = '\0';

    printf("\npostfix Expretion -> ");
    puts(postfixExp);
    return 0;
}


/*  Outout:
        Enter infix expretion: a/(b-c+d)*e+f^g

        postfix Expretion -> abc-d+/e*fg^+      */


