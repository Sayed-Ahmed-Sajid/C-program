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

  int maximum_value=A[0];


  for(int i=0;i<n;i++)
  {
   if(A[i]>maximum_value)
   {
    maximum_value=A[i];
   }
  }


  printf("Maximum value of the array is = %d\n",maximum_value);

    return 0;
}