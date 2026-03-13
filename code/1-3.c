#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int age;
    char grade;
    float gpa;

    scanf("%d %c %f", &age, &grade, &gpa);
    printf("%d %c %f\n", age, grade, gpa);

    return 0;
}
