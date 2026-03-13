#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int num;
    int isPrime = 1; //true

    scanf("%d", &num);

    if (num == 1) {
        isPrime = 0;
    }
    else {
        for (int i = 2; i <= num/2 ; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}
