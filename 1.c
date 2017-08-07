#include <stdio.h>
int main()
{
    int power, exponent;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &power);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= power;
        --exponent;
    }
    printf("Answer = %lld", result);
    return 0;
}
