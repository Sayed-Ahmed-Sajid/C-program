#include<stdio.h>
int main ()
{
   int n;
   printf("n:");
   scanf("%d",&n);

   int A[n];

  for(int i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
  }

  int minimum_value=A[0];


  for(int i=0;i<n;i++)
  {
   if(A[i]<minimum_value)
   {
    minimum_value=A[i];
   }
  }


  printf("Minimum value of the array is = %d\n",minimum_value);

    return 0;
}