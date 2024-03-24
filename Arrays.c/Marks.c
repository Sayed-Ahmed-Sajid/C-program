/*Take some marks of students.
If marks of any student is less than an integer x,
then print its roll number(here roll refers to indexes)*/
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

  for(i=0;i<n;i++)
  {
    if(A[i]<x)
    {
        printf("%d ",i);
    }
   
  }

  if(A[i]>x)
    {
        printf("Number is out of the range");
    }



  return 0;








}