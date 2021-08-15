#include<stdio.h>
int main()
{
   int a=10 ;
   int *ptr=&a;
   printf("%d%x",a,ptr);
   printf("%d%x%u",a,ptr,&ptr);
   return 0;
   }
