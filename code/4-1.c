#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, result;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
    case '-':
        result = a - b;
        break;
    case '+':
        result = a + b;
        break;
    case '/':
        result = a / b;
        break;
    case '*':
        result = a * b;
        break;
    }

    printf("%d", result);

    return 0;
}
