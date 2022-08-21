
#include<stdio.h>
int main()
{
  int i,j,a,b;
  for(i=1;i<=4;i++)
    {
       a=1;b=i;
        for(j=1;j<=4;j++)
         {
         
          if(j>=5-i && j<=4)
         {
           printf("%d",a);
           a++;
         }
         else
           printf(" ");
         }
        for(j=1;j<=4;j++)
          {
            if (j<i)
            {
              printf("%d",b-1);
              b--;
            }

            else 
              printf(" ");
          }
       printf("\n");
    }
  return 0;
}