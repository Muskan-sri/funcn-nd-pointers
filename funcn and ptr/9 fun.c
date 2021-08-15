/*Q.9.Write a program that will print nth term of the Fibonacci series using
recursion.
muskan kumari c2 08*/
#include<stdio.h>
int fibonacci(int n);
int main()
    {
        int i,n;
        printf("Enter the number: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        printf("%d, ",fibonacci(i));
        return 0;
    }
 int fibonacci(int n)
	{
	     if(n==0)
            return 0;
         else if(n==1)
            return 1;
         else
           return(fibonacci(n-1)+fibonacci(n-2));
    }
