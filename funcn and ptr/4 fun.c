/*Q.4. Write a function check_prime that will return 1 if the number passed to
it is prime and return -1 if it is composite. Call this in main() to write the
complete program.
muskan kumari c2 08*/
#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(prime(n)==1)
        printf(" %d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            flag=1;
            break;
        }

    if(flag==0)
        return 1;
    else
        return -1;
}
