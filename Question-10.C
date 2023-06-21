// Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int x = 1 , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("\ntable of %d is : ",n);

    while (x <= 10)
    {
        printf("\n%d * %d = %d",n,x,n*x);
        x++;
    }

    return 0;
}
