// Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main()
{
    int x , n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(x=1 ; x<=n ; x++)
        printf("\n%d.MySirG",x);

    return 0;
}
