/* Q.7. Design the matrix multiplication program by using user defined
functions. It should have three functions: input_matrix, multiply_matrix and
display_matrix
muskan kumari c2 08*/
#include<stdio.h>
void inp_matrix(int a[10][10], int b[10][10], int nr1,int nr2, int nc1, int nc2);
void mul_matrix(int a[10][10], int b[10][10], int mult[10][10],int nr1,int nr2, int nc1,int nc2);
void disp_matrix(int mult[10][10],int nr1,int nc2);
int main()
{
    int nr1, nc1, nr2, nc2, a[10][10], b[10][10], mult[10][10];
    printf("Enter no. of rows and column of first matrix : \n");
    scanf("%d %d",&nr1,&nc1);
    printf("Enter no. of rows of second matrix : \n");
    scanf("%d %d",&nr2,&nc2);
    if(nc1!=nr2)
    {
        printf("Multiplication of matrices is invalid.");
    }
    else
    {
        inp_matrix(a,b,nr1,nr2,nc1,nc2);
        mul_matrix(a,b,mult,nr1,nr2,nc1,nc2);
        disp_matrix(mult,nr1,nc2);
    }
    return 0;
}
void inp_matrix(int a[10][10], int b[10][10], int nr1,int nr2, int nc1, int nc2)
{
    int i,j;
    printf("Enter the elements of matrix a : \n");
    for(i=0;i<nr1;i++)
    {
        for(j=0;j<nc1;j++)
        {
                    scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix b : \n");
    for(i=0;i<nr2;i++)
    {
        for(j=0;j<nc2;j++)
        {

            scanf("%d",&b[i][j]);
        }
    }
}
void mul_matrix(int a[10][10], int b[10][10], int mult[10][10],int nr1,int nc1,int nr2, int nc2)
{
    int i,j,k;
    for(i=0;i<nr1;i++)
        {
            for(j=0;j<nc2;j++)
            {
                mult[i][j]=0;
                for(k=0;k<nc1;k++)
                {
                    mult[i][j]=mult[i][j] + a[i][k]*b[k][j];
                }
            }
        }
}
void disp_matrix(int mult[10][10],int nr1,int nc2)
{
    int i,j;
    printf("The product of the matrices is : ");
    for(i=0;i<nr1;i++)
    {
        printf("\n");
        for(j=0;j<nc2;j++)
            printf("%d\t",mult[i][j]);
    }
}
