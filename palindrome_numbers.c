#include <stdio.h>
 
int main()
{
   int number, reverse = 0, temp;
 
   printf("Enter a number\n");
   scanf("%d",&number); 
   temp = number; 
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
   if ( number == reverse ) {
      printf("%d is a palindrome number.\n", number);
  }else{
      printf("%d is not a palindrome number.\n", number);
 }
   return 0;
}
