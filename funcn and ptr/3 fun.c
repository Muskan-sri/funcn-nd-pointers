/*Q.3. Develop a top down modular program to implement a calculator. The
program should request user to input two numbers and calculate one of the
following as per the choice of the user selected from a menu
muskan kumari c2 08*/
#include<stdio.h>
float sum(float a, float b);
float difference(float a, float b);
float product(float a, float b);
float division(float a, float b);
int main()
    {
        int choice;
        float num1, num2, add,dif,pro,div;
        printf("\n Enter two numbers:");
        scanf("%f%f", &num1,&num2);
        printf("\n Enter the choice: ");
        printf("\n1-sum\n2-difference\n3-product\n4-division\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                sum(num1,num2);
                printf("The sum is %.f",sum(num1,num2));
                break;
            case 2:
                difference(num1,num2);
                printf("The difference is %.f",difference(num1,num2));
                break;
            case 3:
                product(num1,num2);
                printf("The product is %.f",product(num1,num2));
                break;
            case 4:
                division(num1,num2);
                printf("The division is %.f",division(num1,num2));
                break;
            default:
                printf("Invalid input");
        return 0;
        }
    }
float sum(float a,float b)
	{
	     float result;
	     result=a+b;
	    return result;
    }
float difference(float a, float b)
        {
	     float diff;
	     diff=a-b;
	     return diff;
    }
float product(float a, float b)
	{
	     float prod;
	     prod=a*b;
	     return prod;
    }
float division(float a, float b)
	{
	     float divi;
	     divi=a/b;
	     return divi;
    }
