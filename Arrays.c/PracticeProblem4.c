/*count the number of triplets whose sum is equal to the given value x*/

#include<stdio.h>
int main ()
{

  int n,i,j,k,totalTriplets=0;
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
            for(k=j+1;k<=n;k++)
            {
                 if(A[i]+A[j]+A[k]==x)
                 {
                     totalTriplets++;
            printf("(%d,%d,%d)\n",A[i],A[j],A[k]);
                 }
            
            
            }
 
        }
      }


     printf("%d\n",totalTriplets);



}