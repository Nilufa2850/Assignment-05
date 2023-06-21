// Write a program to print cubes of the first N natural numbers.

#include<stdio.h>
int main()
{
    int x = 1 , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("\nCubes of 1st %dth natural numbers : ",n);

    while (x <= n)
    {
        printf("\n%d",x*x*x);
        x++;
    }

    return 0;
}
