/*Q.2. Write a function that will take a parameter as an integer and returns the
factorial of that number.
Prototype of the function should be
int factorial(int);
muskan kumari c2 08*/
#include<stdio.h>
int factorial(int x);
int main()
    {
        int x;
        printf("Enter the number: ");
        scanf("%d",&x);
        printf("Factorial of the %d is : %d ",x,factorial(x));
        return 0;
    }
int factorial(int x)
{
    int i=1,f=1;
    while(i<=x)
    {
        f=f*i;
        i++;
    }
    return f;
}
