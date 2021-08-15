/* Q.1. Define the functions that will add two numbers by using the following function prototype/declaration. Call both of them in main() and verify the
result.
i) int sum (int, int);
ii) void sum (void);
muskan kumari c2 08*/
#include<stdio.h>
int sum(int a, int b);
int main()
    {
        int num1, num2, res;
        printf("\n Enter two numbers:");
        scanf("%d%d", &num1,&num2);
        printf("\n The sum is : %d", sum(num1,num2));
        return 0;
    }
int sum(int a, int b)
	{
	     int result;
	     result=a + b;
	     return result;
    }
