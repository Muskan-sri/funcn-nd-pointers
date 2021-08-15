/*Q.10. Write a program that will read two numbers and compute GCD using
recursion.
muskan kumari c2 08*/
#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int x,y;
    printf(" Enter two number : ");
    scanf("%d%d",&x,&y);
    printf("GCD of the %d and %d is : %d",x,y,gcd(x,y));
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
    return gcd(b,a%b);
}
