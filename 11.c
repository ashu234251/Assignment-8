#include<stdio.h>
int main()
{
    int i,j,a,b;
    for(i=1;i<=5;i++)
     {
        a='A';
        b=63+i;
        for(j=1;j<=5;j++)
          {
             if(j>=6-i)
              {
               printf("%c",a);
               a++;
              }
             else
               printf(" ");
          }

        for(j=1;j<=5;j++)
          {
            if(j<i)
             {
              printf("%c",b);
              b--;
             }
            else
              printf(" ");
          }
        printf("\n");
     }
}