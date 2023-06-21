// Write a program to print the first N even natural numbers.

#include<stdio.h>
int main()
{
    int x=2 , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x<=n*2)
    {
        printf("\n%d",x);
        x+=2;
    }
    return 0;
}
