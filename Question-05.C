// Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("\n%d",2*n-1);
        n--;

    }
    return 0;
}
