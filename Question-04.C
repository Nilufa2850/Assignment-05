// Write a program to print the first N odd natural numbers.

#include<stdio.h>
int main()
{
    int x , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(x=1 ; x<=n*2 ; x+=2)
        printf("%d\n",x);

    return 0;
}
