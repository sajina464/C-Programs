
#include <stdio.h>

int reverseNumber(int n, int rev)
{
    if (n == 0)
        return rev;

    rev = rev * 10 + (n % 10);

    return reverseNumber(n / 10, rev);
}

int main()
{
    int n, reverse;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    reverse = reverseNumber(n, 0);

    printf("The reversed number is %d\n", reverse);

    return 0;
}
