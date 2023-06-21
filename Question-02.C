// Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int x , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(x=1 ; x<=n ; x++)
        printf("%d\n",x);

    return 0;
}
