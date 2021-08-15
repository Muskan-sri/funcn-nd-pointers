/*Q.2. Write a program to check, which of the
operators out of +, -, *, /, ++, -- are  applicable on the pointers and which are not.
muskan c2 08*/
#include <stdio.h>
int main()
{
    int x,y,res,*ptr1,*ptr2;
    x=20,y=50;
    ptr1=&x;
    ptr2=&y;
    printf("\nThe value of ptr1 is %d and the value of ptr2 is %d",ptr1,ptr2);
    //res=ptr1+ptr2;
    //printf("\nThe value of ptr1+ptr2 is :%d",res);
    res=ptr1-ptr2;
    printf("\nThe value of ptr1-ptr2 is :%d",res);
    //res=ptr1*ptr2;
    //printf("\nThe value of ptr1*ptr2 is :%d",res);
    //res=ptr1/ptr2;
    //printf("\nThe value of ptr1/ptr2 is :%d",res);
    printf("\nThe value of ptr1 is %d and ptr2 is %d",++ptr1,++ptr2);
    printf("\nThe value of ptr1 is %d and ptr2 is %d",--ptr1,--ptr2);
    return 0;
}
