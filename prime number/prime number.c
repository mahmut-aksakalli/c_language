#include <stdio.h>
int main()
{
  int initial, range, i, j, flag;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &initial, &range);
  printf("Prime numbers between %d and %d are: ", initial, range);
  for(i=initial+1; i<range; ++i)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
  }
  return 0;
}
