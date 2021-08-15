/*Q.11. Write a recursive function for power(x,n)
muskan kumari c2 08*/
#include<stdio.h>
int power(int a,int b);
int main()
{
    int x ,n;
    printf("Enter the value of x and n:  ");
    scanf("%d%d",&x,&n);
    printf("%d to the power of %d is %d",x,n,power(x,n));
    return 0;
 }
 int power( int x,int n)
{
    if(n==0)
        return 1;
    else
    return(x*power(x,n-1));
}
