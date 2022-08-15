//4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int n,i,x=1;
    printf("Enter Value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",x);
        x=x+2;
    }
    return 0;
}