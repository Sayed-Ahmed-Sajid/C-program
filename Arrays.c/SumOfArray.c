#include<stdio.h>
int main ()
{
   int n;   
   printf("n:");
   scanf("%d",&n);

   int A[n]; // n refers to size of array
   for(int i=0;i<n;i++)
   {
    scanf("%d",&A[i]);
   }

   long long int sum=0;

   for(int i=0;i<n;i++)
   {
    sum=sum+A[i];
   }


   printf("Sum of Array is = %lld\n",sum);

  return 0;

}