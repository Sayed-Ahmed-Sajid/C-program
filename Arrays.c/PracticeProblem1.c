/*Take an array of integers ,change the value of all odd indexed
elements to its second multiple and increment all even indexed 
value by 10  */
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
 
   for(int i=0;i<n;i++)
  {
   if(i%2==0)
   {
     A[i]=A[i]+10;
   }
   else if(i%2!=0)
   {
    A[i]=A[i]*2;
   }
  }
 
  for(int i=0;i<n;i++)
  {
    printf("%d ",A[i]);
  }


 return 0;

}