/*Q.8. Write a program that will find factorial of a number using recursion.
muskan kumari c2 08*/
#include<stdio.h>
int factorial(int x);
int main()
{
    int x;
    printf("Enter the number to find its  factorial: ");
    scanf("%d",&x);
    printf("factorial of %d is %d",x,factorial(x));
    return 0;
}
int factorial(int x)
{
    if(x<=1)
        return x;
    else
        return x*factorial(x-1);
}
