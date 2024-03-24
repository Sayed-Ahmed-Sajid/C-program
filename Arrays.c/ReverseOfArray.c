#include<stdio.h>
int main ()
{
   int n,i;
   printf("n:");
   scanf("%d",&n);

   int A[n];
    printf("Original Array:\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&A[i]);
   }

    printf("Reverse of Array:\n");
   for(i=n-1;i>=0;i--)

   {
    printf("%d ",A[i]);
   }

 return 0;




}
