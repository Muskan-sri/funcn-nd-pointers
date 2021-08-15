/*Q.6. Write a function to check a string passed to it is palindrome or not. It
returns 1 if it is a palindrome and -1 if it is not. Write the complete program
and test.
muskan kumari c2 08*/
#include<stdio.h>
int palindrome(char str[]);
int main()
    {
        char str[50];
        printf("Enter the string :  ");
        scanf(" %[^\n]", str);
        if(palindrome(str)==1)
          printf("%s is a palindrome",str);
        else
            printf("%s is not a palindrome",str);

        return 0;

    }
int palindrome(char str[])
{
    int i,len=0,mid,b,e,flag=0;
    while (str[len] != '\0')
        len++;
    mid=len/2;
    b=0;e=len-1;
    while (b<mid)
        {
        if(str[b]!=str[e])
              {
                   return -1;
              }
        b=b+1;
        e=e-1;
         }
         return 1;
    }
