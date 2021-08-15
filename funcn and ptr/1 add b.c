/* Q.1. Define the functions that will add two numbers by using the following function prototype/declaration. Call both of them in main() and verify the
result.
ii) void sum (void);
muskan kumari c2 08*/
#include<stdio.h>
void sum( );
int main()
    {
        sum( );
    }
void sum( )
	{
        int num1, num2, res;
        printf("\n Enter two numbers:");
        scanf("%d%d", &num1,&num2);
        res=num1+num2;
        printf("\n The sum is : %d", res);
    }
