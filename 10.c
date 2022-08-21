#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
          {
            if(j<=5-i)
              printf("%d",j);
            else 
              printf(" ");
          }

        for(j=1;j<=3;j++)
          {
            if(j>=i-1)
              printf("%d",4-j);
            else 
              printf(" ");
          }
        
     printf("\n");
    }
}