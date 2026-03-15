#include <stdio.h>

int main()
{
    int a, b, c;

    a = b = c = 5;
    printf("%d %d %d\n", a, b, c); //5 5 5

    a = 2 + 3 * 4;
    printf("%d %d %d\n", a, b, c); //14 5 5

    c = a++ + ++b; // 14 + 6
    printf("%d %d %d\n", a, b, c); // 15 6 20 > 15 6 5?

    return 0;
}
