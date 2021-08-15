/*Q.5. Develop a top down modular program that will perform the following
task
a. Read an integer array.
b. Insert an element at the kth position
c. Delete an element from the kth position
muskan kumari c2 08*/
#include<stdio.h>
void read(int num[],int n);
void add(int num[],int n);
void del(int num[],int n);
int main()
{
    int num[100];
    int n,i,choice;
    printf("Enter the size of array needed: ");
    scanf("%d",&n);
    printf("Input the elements of array: ");
    for(i=0;i<n;i++)
        scanf(" %d",&num[i]);
    printf("choose the operation:");
    printf("\n1.Read and display the array\n2.Add an element at K'th pos.\n3.Delete an element at K'th pos\n");
    scanf(" %d",&choice);
       if(choice==1)
             read(num,n);

        else if(choice==2)
            add(num,n);

        else if(choice==3)
            del(num,n);
        else
             printf("Invalid Choice");
    return 0;
}
void read(int num[],int n)
{
   int i;
   for(i=0;i<n;i++)
        printf("%d  ",num[i]);
}
void add(int num[],int n)
{
    int i, pos, x;
    printf("Enter the number to be inserted : \n");
    scanf("%d",&x);
    printf("Enter the position to be inserted : \n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
        {
            num[i+1]=num[i];
        }
    num[pos]=x;
    printf("The numbers after inserting are : \n");
    for(i=0;i<n+1;i++)
        {
            printf("%d\n",num[i]);
        }
}
void del(int num[],int n)
{
      int i, pos;
    printf("Enter the position of number to be deleted : \n");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
        {
            num[i]=num[i+1];
        }
    printf("The numbers after deletion is : \n");
    for(i=0;i<n-1;i++)
        {
            printf("%d\n",num[i]);
        }
}
