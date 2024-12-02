#include<stdio.h>
int fact (int);
viod main()
{
   int n, res;
   clrscr();
   printf("enter a positive number to find factorial \n");
   scanf("%d",&n);
   res=fact(n);
   printf("\n factorial %d is %d(!%d=%d)",n,res,n,res);
   getch();
  }
  int fact(int n)
  {
    int i,fact=1;
    for(i=1; i<n;i++)
    {
       fact=fact*i;
    }
       return fact;
}
