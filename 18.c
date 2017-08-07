#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, j, temp1, temp2, remainder, n = 0, result = 0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);
    for(j = low + 1;  j < high; ++j)
    {
        temp2 = j;
        temp1 = j;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == j)
        {
            printf("%d ", j);
        }
        n = 0;
        result = 0;
        }
    return 0;
}
