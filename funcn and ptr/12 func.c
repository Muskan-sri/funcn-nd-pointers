/*Write a program to find the sun of the  elements of array
muskan kumari c2 08 */
#include<stdio.h>
int sum (int a[],int n);
int main()
{
    int i,n,a[50];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Entter the element of the arrray: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The Sum of the array : %d ",sum(a,n));
    return 0;
}
int sum(int a[],int n)
{
    if(n<0)
        return 0;
        else
    return(a[n-1]+sum(a,n-1));
}
