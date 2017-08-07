#include <stdio.h>
int main()
{
    int c, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &c);
    originalInteger = c;
    while( c!=0 )
    {
        remainder = c%10;
        reversedInteger = reversedInteger*10 + remainder;
        c /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
