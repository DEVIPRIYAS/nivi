#include <stdio.h>
int main()
{
   int n, j;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
    printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(j=1; j<=n; ++j)
        {
         factorial = factorial*j;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
return 0;
}
