/*find the difference betweenthe sum of elements at even indices 
to the sum of elements at odd indices*/
#include<stdio.h>
int main ()
{
   int n,i;
   scanf("%d",&n);
   int A[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&A[i]);
   }
  


  long long int sumEven=0;
  long long int sumOdd=0;
   for(i=0;i<n;i++)
   {
    if(i%2==0)
    {
        sumEven=sumEven+A[i];
    }
    else
    {
          sumOdd=sumOdd+A[i];
    }
    
   }

   printf("%d\n",sumEven-sumOdd);
   


  return 0;


}