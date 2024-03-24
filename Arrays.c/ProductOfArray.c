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

   long long int prod=1;

   for(int i=0;i<n;i++)
   {
    prod=prod*A[i];
   }

   printf("Product of Array is = %lld\n",prod);

  return 0;


}