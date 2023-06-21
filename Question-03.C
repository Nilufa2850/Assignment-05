// Write a program to print the first N natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int x , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(x=n ; x>=1 ; x--)
        printf("%d\n",x);

    return 0;
}
