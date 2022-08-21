#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=7;i++)
      {
        a='A';
        for(j=1;j<=7;j++)
          {
            if(j<=8-i)
            {
              printf("%c",a);
              a++;
            }
            else  
              printf(" ");
          }
        for(j=1;j<=6;j++)
          {
            if(j>=i-1)
             {
              printf("%c",71-j);
             }
            else
              printf(" ");
          }
        printf("\n");
      }
}