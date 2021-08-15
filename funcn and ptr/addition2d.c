/*WAR TO AAD 2D MATRTIX USING FUNCTION*/
#include<stdio.h>

void input(int arr[10][10],int row,int col);
void addition(int arr1[10][10],int arr2[10][10],int arr3[10][10],int row,int col);
void display(int arr3[10][10],int row,int col);
void main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],row,col;
    printf("Enter the size of rows : ");
    scanf("%d",&row);
    printf("Enter the sixe of columns : ");
    scanf("%d",&col);
    input(arr1,row,col);
    input(arr2,row,col);
    addition(arr1,arr2,arr3,row,col);
    display(arr3,row,col);
}

void input(int arr[10][10],int row,int col)
{
    int i,j;
    printf("Enter the elements : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void addition(int arr1[10][10],int arr2[10][10],int arr3[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}

void display(int arr3[10][10],int row ,int col)
{
    int i,j;
    printf("The sum is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}
