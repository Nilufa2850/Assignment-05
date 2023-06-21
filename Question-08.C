// Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main()
{
    int x = 1 , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x <= n)
    {
        printf("\n%d * %d = %d",x,x,x*x);
        x++;
    }

    return 0;
}
