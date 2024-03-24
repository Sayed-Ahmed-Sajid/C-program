#include<stdio.h>
int main ()
{
  int n,i;
  printf("n:");
  scanf("%d",&n);

  int A[n];

  for(i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
  }
  
  int x;
  printf("x:");
  scanf("%d",&x);


   int flag=0;
  for(i=0;i<n;i++)
  {
    if(A[i]>x)
    {
        flag++;
    }
  }
  
  printf("Greatest values of x are:%d",flag);







}