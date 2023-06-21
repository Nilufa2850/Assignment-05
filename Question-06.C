// Write a program to print the first N even natural numbers.

#include<stdio.h>
int main()
{
    int x=1 , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    while (x<=n)
    {
        printf("\n%d",x*2);
        x++;
    }
    return 0;
}
