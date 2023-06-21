// Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("\n%d",2*n);
        n--;
    }
    return 0;
}
