#include<stdio.h>
int main()
{
      int terim, fb=1, fb2=1,fb3,i;
      scanf("%d",&terim);
      for(i=1; i<=terim; i++)
      {
            fb3=fb+fb2;
            printf("%d ",fb);
            fb=fb2;
            fb2=fb3;
      }
      printf("\n");

      return 0;
}
