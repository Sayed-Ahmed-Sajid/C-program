/*find the total number of pairs in the array whose sum is equal to the 
given value x
ex: int count=0; and count=2 pairs */
#include<stdio.h>
int main ()
{
    int n,i,j,totalPairs=0;
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
      
      for(i=0;i<=n;i++)
      {
        for(j=i+1;j<=n;j++)
        {
            if(A[i]+A[j]==x)
            {
                totalPairs=totalPairs+1;
            printf("(%d,%d)\n",A[i],A[j]);
            }
        }
      }
      printf("%d\n",totalPairs);


}